#include "ManicObsAvoidance.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h" 
#include "DrawDebugHelpers.h"
#include "UObject/UnrealType.h"

UManicObsAvoidance::UManicObsAvoidance()
{
	NodeName = "Obstacle-Aware: Move To Target";
	bNotifyTick = true;

	// Default movement settings.
	MovementSpeed = 600.f;
	AcceptableRadius = 50.f;
	InsideFactor = 0.8f;

	// Obstacle avoidance defaults.
	ObstacleCheckRadius = 30.f;
	MinimumClearance = 50.f;
	MaxAdjustmentIterations = 5;

	// Debug options.
	bDrawDebug = true;
	DebugSphereRadius = 50.f;
	DebugDrawColour = FColor::Magenta;
	bDisableObstacleAvoidance = false;

	// Target selection defaults.
	TargetType = ETargetType::BlackboardLocation;
	TargetLocationKey.SelectedKeyName = "TargetLocation";
	TargetActorKey.SelectedKeyName = "TargetActor";
	StaticTargetActor = nullptr;

	// Stuck detection defaults.
	MinMoveDistance = 10.f;
	StuckTimeThreshold = 1.0f;
	RepelOffset = 30.f;
	Timeout = 10.f;
}

uint16 UManicObsAvoidance::GetInstanceMemorySize() const
{
	return sizeof(FManicObsAvoidanceMemory);
}

EBTNodeResult::Type UManicObsAvoidance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: AIController is NULL."));
		return EBTNodeResult::Failed;
	}

	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: Pawn is NULL."));
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: Blackboard is NULL."));
		return EBTNodeResult::Failed;
	}

	UWorld* World = AICon->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: World is NULL."));
		return EBTNodeResult::Failed;
	}

	// Record pawn starting location.
	FVector PawnLocation = AIPawn->GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Pawn starting location: %s"), *PawnLocation.ToString());

	// Compute target goal based on selected TargetType.
	FVector ComputedGoal = FVector::ZeroVector;
	bool bValidTarget = false;
	AActor* UsedTargetActor = nullptr;

	switch (TargetType)
	{
	case ETargetType::BlackboardActor:
	{
		UsedTargetActor = Cast<AActor>(BB->GetValueAsObject(TargetActorKey.SelectedKeyName));
		if (UsedTargetActor)
		{
			FVector Centre = UsedTargetActor->GetActorLocation();
			FBox Bounds = UsedTargetActor->GetComponentsBoundingBox();
			float Radius = Bounds.GetExtent().GetMax();
			float StopDist = Radius * InsideFactor;
			FVector Dir = (PawnLocation - Centre).GetSafeNormal();
			ComputedGoal = Centre + Dir * StopDist;
			bValidTarget = true;
			UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Blackboard Actor found. Centre: %s, ComputedGoal: %s"), *Centre.ToString(), *ComputedGoal.ToString());
		}
		break;
	}
	case ETargetType::StaticActor:
	{
		if (StaticTargetActor.IsValid())
		{
			UsedTargetActor = StaticTargetActor.Get();
			FVector Centre = UsedTargetActor->GetActorLocation();
			FBox Bounds = UsedTargetActor->GetComponentsBoundingBox();
			float Radius = Bounds.GetExtent().GetMax();
			float StopDist = Radius * InsideFactor;
			FVector Dir = (PawnLocation - Centre).GetSafeNormal();
			ComputedGoal = Centre + Dir * StopDist;
			bValidTarget = true;
			UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Static Actor selected. Centre: %s, ComputedGoal: %s"), *Centre.ToString(), *ComputedGoal.ToString());
		}
		break;
	}
	case ETargetType::BlackboardLocation:
	default:
	{
		FVector Loc = BB->GetValueAsVector(TargetLocationKey.SelectedKeyName);
		if (!Loc.IsNearlyZero())
		{
			FVector Dir = (Loc - PawnLocation).GetSafeNormal();
			ComputedGoal = Loc + Dir * AcceptableRadius;
			bValidTarget = true;
			UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Blackboard Location found. Input: %s, ComputedGoal: %s"), *Loc.ToString(), *ComputedGoal.ToString());
		}
		break;
	}
	}

	if (!bValidTarget)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: No valid target provided for the selected TargetType."));
		return EBTNodeResult::Failed;
	}

	// Log computed goal before obstacle adjustment.
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Goal before obstacle adjustment: %s"), *ComputedGoal.ToString());

	// Adjust goal for obstacles if enabled.
	if (!bDisableObstacleAvoidance)
	{
		if (!AdjustGoalForObstacles(AIPawn, UsedTargetActor, ComputedGoal, World))
		{
			UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Could not adjust goal to avoid obstacles."));
			return EBTNodeResult::Failed;
		}
	}

	// Log final goal and distance.
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Final ComputedGoal: %s"), *ComputedGoal.ToString());
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Distance from Pawn to Goal: %f"), FVector::Dist(PawnLocation, ComputedGoal));

	// Write goal to blackboard and store in memory.
	BB->SetValueAsVector(TargetLocationKey.SelectedKeyName, ComputedGoal);
	FManicObsAvoidanceMemory* MyMemory = reinterpret_cast<FManicObsAvoidanceMemory*>(NodeMemory);
	MyMemory->DesiredGoal = ComputedGoal;
	MyMemory->LastPosition = PawnLocation;
	MyMemory->StuckTime = 0.f;
	MyMemory->ElapsedTime = 0.f;

	// Set NPC movement speed.
	if (ACharacter* Char = Cast<ACharacter>(AIPawn))
	{
		if (UCharacterMovementComponent* MoveComp = Char->GetCharacterMovement())
		{
			MoveComp->MaxWalkSpeed = MovementSpeed;
			UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Movement speed set to %f"), MovementSpeed);
		}
	}

	// Issue MoveTo request.
	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(ComputedGoal);
	MoveRequest.SetAcceptanceRadius(5.f);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetCanStrafe(true);
	MoveRequest.SetAllowPartialPath(true);

	EPathFollowingRequestResult::Type Result = AICon->MoveTo(MoveRequest);
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: MoveTo result = %d"), static_cast<int32>(Result));

	if (Result == EPathFollowingRequestResult::Failed)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: MoveTo request failed."));
		return EBTNodeResult::Failed;
	}

	// Draw debug visuals if enabled.
	if (bDrawDebug)
	{
		DrawDebugLine(World, PawnLocation, ComputedGoal, DebugDrawColour, false, 3.0f, 0, 2.0f);
		DrawDebugSphere(World, ComputedGoal, DebugSphereRadius, 12, DebugDrawColour, false, 3.0f);
	}

	return EBTNodeResult::InProgress;
}

void UManicObsAvoidance::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController* AICon = OwnerComp.GetAIOwner();
	APawn* AIPawn = AICon ? AICon->GetPawn() : nullptr;
	if (!AICon || !AIPawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	FManicObsAvoidanceMemory* MyMemory = reinterpret_cast<FManicObsAvoidanceMemory*>(NodeMemory);
	FVector Goal = MyMemory->DesiredGoal;
	FVector CurrentPosition = AIPawn->GetActorLocation();

	UWorld* World = AICon->GetWorld();
	if (bDrawDebug && World)
	{
		// Draw the navigation path using synchronous pathfinding.
		UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(World, CurrentPosition, Goal, AIPawn);
		if (NavPath && NavPath->IsValid())
		{
			if (FArrayProperty* PathPointsProperty = FindFProperty<FArrayProperty>(NavPath->GetClass(), FName(TEXT("PathPoints"))))
			{
				TArray<FNavPathPoint>* PathPointsPtr = PathPointsProperty->ContainerPtrToValuePtr<TArray<FNavPathPoint>>(NavPath);
				if (PathPointsPtr && PathPointsPtr->Num() > 0)
				{
					for (int32 i = 0; i < PathPointsPtr->Num() - 1; i++)
					{
						DrawDebugLine(World, (*PathPointsPtr)[i].Location, (*PathPointsPtr)[i+1].Location, FColor::Blue, false, DeltaSeconds, 0, 2.0f);
					}
				}
			}
		}
	}

	// Stuck detection: if pawn hasn't moved much, accumulate stuck time.
	if (FVector::Dist(CurrentPosition, MyMemory->LastPosition) < MinMoveDistance)
	{
		MyMemory->StuckTime += DeltaSeconds;
	}
	else
	{
		MyMemory->StuckTime = 0.f;
		MyMemory->LastPosition = CurrentPosition;
	}

	// Timeout: if we've been moving for too long, finish the task.
	MyMemory->ElapsedTime += DeltaSeconds;
	if (MyMemory->ElapsedTime >= Timeout)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Timeout reached, finishing task."));
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	// Check if the pawn is close enough to the goal.
	float Distance = FVector::Dist(CurrentPosition, Goal);
	UE_LOG(LogTemp, Log, TEXT("ObsAvoidance Tick: Pawn: %s, Goal: %s, Distance: %f, StuckTime: %f"),
		*CurrentPosition.ToString(), *Goal.ToString(), Distance, MyMemory->StuckTime);

	if (Distance <= ArrivalThreshold)
	{
		UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Pawn has reached the goal (within threshold of %f)."), ArrivalThreshold);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

bool UManicObsAvoidance::AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& Goal, UWorld* World)
{
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(AIPawn);
	if (TargetActor)
	{
		Params.AddIgnoredActor(TargetActor);
	}

	// Check direct line from Pawn to Goal.
	bool bBlocked = World->LineTraceSingleByChannel(Hit, AIPawn->GetActorLocation(), Goal, ECC_WorldStatic, Params);
	if (bBlocked && bDrawDebug)
	{
		DrawDebugLine(World, AIPawn->GetActorLocation(), Hit.Location, FColor::Red, false, 2.0f, 0, 2.0f);
		DrawDebugSphere(World, Hit.Location, 20.f, 10, FColor::Red, false, 2.0f);
		UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: LineTrace blocked by %s at %s"),
			Hit.GetActor() ? *Hit.GetActor()->GetName() : TEXT("Unknown"), *Hit.Location.ToString());
	}

	// Adjust the goal if an obstacle is detected.
	int32 Iterations = 0;
	while (Iterations++ < MaxAdjustmentIterations)
	{
		bool bOverlap = World->SweepSingleByChannel(Hit, Goal, Goal, FQuat::Identity, ECC_WorldStatic,
			FCollisionShape::MakeSphere(ObstacleCheckRadius), Params);

		if (!bOverlap)
		{
			break;
		}

		FVector Push = Hit.Normal * (MinimumClearance + 10.0f);
		Goal += Push;

		if (bDrawDebug)
		{
			DrawDebugSphere(World, Hit.Location, 25.f, 8, FColor::Yellow, false, 1.5f);
			DrawDebugLine(World, Hit.Location, Goal, FColor::Yellow, false, 1.5f, 0, 1.5f);
		}

		UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Adjusting goal, new goal = %s"), *Goal.ToString());
	}

	// Project the final goal onto the navmesh.
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);
	FNavLocation NavLoc;
	if (NavSys && NavSys->ProjectPointToNavigation(Goal, NavLoc))
	{
		Goal = NavLoc.Location;
		UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Projected goal onto navmesh: %s"), *Goal.ToString());
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Failed to project goal onto navmesh."));
	return false;
}
