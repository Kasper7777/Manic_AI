#include "ManicObsAvoidance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"

UManicObsAvoidance::UManicObsAvoidance()
{
	NodeName = TEXT("Obstacle-Aware: Move To Target");
	bNotifyTick = true;  // We want TickTask to be called each frame

	// Default movement
	MovementSpeed    = 600.f;
	InsideFactor     = 0.8f;
	AcceptableRadius = 50.f;
	ArrivalThreshold = 30.f;

	// Obstacle avoidance
	bDisableObstacleAvoidance = false;
	ObstacleCheckRadius       = 30.f;
	MinimumClearance          = 50.f;
	MaxAdjustmentIterations   = 5;

	// Stuck detection
	MinMoveDistance    = 10.f;
	StuckTimeThreshold = 1.0f;
	RepelOffset        = 30.f;
	Timeout            = 10.f;

	// Debug
	bDrawDebug        = false;
	DebugSphereRadius = 50.f;
	DebugDrawColour   = FColor::Magenta;

	// Default blackboard keys
	TargetType        = ETargetType::BlackboardLocation;
	TargetLocationKey.SelectedKeyName = TEXT("TargetLocation");
	TargetActorKey.SelectedKeyName    = TEXT("TargetActor");
}

uint16 UManicObsAvoidance::GetInstanceMemorySize() const
{
	return sizeof(FManicObsAvoidanceMemory);
}

EBTNodeResult::Type UManicObsAvoidance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// 1) Validate AI & Blackboard
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: AIController is null."));
		return EBTNodeResult::Failed;
	}
	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: Pawn is null."));
		return EBTNodeResult::Failed;
	}
	UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
	if (!BBComp)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: Blackboard is null."));
		return EBTNodeResult::Failed;
	}
	UWorld* World = AICon->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("ObsAvoidance: World context is null."));
		return EBTNodeResult::Failed;
	}

	const FVector PawnLocation = AIPawn->GetActorLocation();

	// 2) Decide how we get the final goal
	FVector ComputedGoal = FVector::ZeroVector;
	bool bValidTarget = false;
	AActor* UsedActor = nullptr;

	switch (TargetType)
	{
	case ETargetType::BlackboardActor:
	{
		if (AActor* BBActor = Cast<AActor>(BBComp->GetValueAsObject(TargetActorKey.SelectedKeyName)))
		{
			UsedActor = BBActor;
			FVector Center = BBActor->GetActorLocation();
			FBox Bounds    = BBActor->GetComponentsBoundingBox();
			float Radius   = Bounds.GetExtent().GetMax();
			float StopDist = Radius * InsideFactor;

			// Move from the Actor center outward toward the Pawn
			FVector Dir = (PawnLocation - Center).GetSafeNormal();
			ComputedGoal = Center + Dir * StopDist;
			bValidTarget = true;
		}
	}
	break;

	case ETargetType::StaticActor:
	{
		if (StaticTargetActor.IsValid())
		{
			AActor* StaticRef = StaticTargetActor.Get();
			if (StaticRef)
			{
				UsedActor = StaticRef;
				FVector Center = StaticRef->GetActorLocation();
				FBox Bounds    = StaticRef->GetComponentsBoundingBox();
				float Radius   = Bounds.GetExtent().GetMax();
				float StopDist = Radius * InsideFactor;

				FVector Dir = (PawnLocation - Center).GetSafeNormal();
				ComputedGoal = Center + Dir * StopDist;
				bValidTarget = true;
			}
		}
	}
	break;

	case ETargetType::BlackboardLocation:
	default:
	{
		FVector BBLoc = BBComp->GetValueAsVector(TargetLocationKey.SelectedKeyName);
		if (!BBLoc.IsNearlyZero())
		{
			// Subtract AcceptableRadius so we don't overshoot
			FVector Dir = (BBLoc - PawnLocation).GetSafeNormal();
			ComputedGoal = BBLoc - Dir * AcceptableRadius;
			bValidTarget = true;
		}
	}
	break;
	}

	if (!bValidTarget)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: No valid target from TargetType %d."), (int32)TargetType);
		return EBTNodeResult::Failed;
	}

	// 3) Optionally adjust for obstacles
	if (!bDisableObstacleAvoidance)
	{
		if (!AdjustGoalForObstacles(AIPawn, UsedActor, ComputedGoal, World))
		{
			UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Could not adjust goal for obstacles."));
			return EBTNodeResult::Failed;
		}
	}

	// 4) Store in memory
	FManicObsAvoidanceMemory* MyMemory = reinterpret_cast<FManicObsAvoidanceMemory*>(NodeMemory);
	MyMemory->DesiredGoal  = ComputedGoal;
	MyMemory->LastPosition = PawnLocation;
	MyMemory->StuckTime    = 0.f;
	MyMemory->ElapsedTime  = 0.f;

	// 5) Optionally set AI movement speed
	if (ACharacter* Char = Cast<ACharacter>(AIPawn))
	{
		if (UCharacterMovementComponent* MoveComp = Char->GetCharacterMovement())
		{
			MoveComp->MaxWalkSpeed = MovementSpeed;
		}
	}

	// 6) Issue MoveTo request
	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(ComputedGoal);
	MoveRequest.SetAcceptanceRadius(ArrivalThreshold);
	MoveRequest.SetAllowPartialPath(true);
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetCanStrafe(true);

	EPathFollowingRequestResult::Type MoveResult = AICon->MoveTo(MoveRequest);
	if (MoveResult == EPathFollowingRequestResult::Failed)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: MoveTo request failed."));
		return EBTNodeResult::Failed;
	}

	// Debug
	if (bDrawDebug)
	{
		DrawDebugSphere(World, ComputedGoal, DebugSphereRadius, 12, DebugDrawColour, false, 3.f);
		DrawDebugLine(World, PawnLocation, ComputedGoal, DebugDrawColour, false, 3.f, 0, 2.f);
	}

	return EBTNodeResult::InProgress; // keep ticking
}

void UManicObsAvoidance::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FManicObsAvoidanceMemory* MyMemory = reinterpret_cast<FManicObsAvoidanceMemory*>(NodeMemory);
	AAIController* AICon = OwnerComp.GetAIOwner();
	APawn* AIPawn = AICon ? AICon->GetPawn() : nullptr;
	if (!AICon || !AIPawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}
	UWorld* World = AICon->GetWorld();

	const FVector CurrentPos = AIPawn->GetActorLocation();
	const float DistToGoal   = FVector::Dist(CurrentPos, MyMemory->DesiredGoal);
	const float MovedThisFrame= FVector::Dist(CurrentPos, MyMemory->LastPosition);

	// Stuck detection
	if (MovedThisFrame < MinMoveDistance)
	{
		MyMemory->StuckTime += DeltaSeconds;
	}
	else
	{
		MyMemory->StuckTime = 0.f;
		MyMemory->LastPosition = CurrentPos;
	}

	MyMemory->ElapsedTime += DeltaSeconds;

	// Timeout check
	if (Timeout > 0.f && MyMemory->ElapsedTime >= Timeout)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Timeout (%.2f sec). Stopping."), MyMemory->ElapsedTime);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	// Stuck check
	if (StuckTimeThreshold > 0.f && MyMemory->StuckTime >= StuckTimeThreshold)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Pawn is stuck for %.1f sec. Failing."), MyMemory->StuckTime);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// If close enough to the goal
	if (DistToGoal <= ArrivalThreshold)
	{
		UE_LOG(LogTemp, Log, TEXT("ObsAvoidance: Reached the goal (distance=%.1f)."));
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

bool UManicObsAvoidance::AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& Goal, UWorld* World)
{
	if (!World)
	{
		return false;
	}

	// Basic line trace from Pawn to Goal
	FCollisionQueryParams Params(FName(TEXT("ObsAvoidLineTrace")), false, AIPawn);
	if (TargetActor)
	{
		// Ignore the target's own collision so we can approach it
		Params.AddIgnoredActor(TargetActor);
	}

	const FVector Start = AIPawn->GetActorLocation();
	FHitResult Hit;
	bool bBlocked = World->LineTraceSingleByChannel(Hit, Start, Goal, ECC_Visibility, Params);
	if (bBlocked && bDrawDebug)
	{
		DrawDebugLine(World, Start, Hit.Location, FColor::Red, false, 2.f, 0, 2.f);
		DrawDebugSphere(World, Hit.Location, 16.f, 12, FColor::Red, false, 2.f);
	}

	// Try multiple sphere sweeps
	for (int32 i = 0; i < MaxAdjustmentIterations; i++)
	{
		bool bOverlap = World->SweepSingleByChannel(
			Hit,
			Goal,
			Goal,
			FQuat::Identity,
			ECC_Visibility,
			FCollisionShape::MakeSphere(ObstacleCheckRadius),
			Params
		);
		if (!bOverlap)
		{
			break; // no overlap at the final spot
		}

		// Nudge away by normal
		Goal += Hit.Normal * (MinimumClearance + 10.f);

		if (bDrawDebug)
		{
			DrawDebugSphere(World, Hit.Location, 25.f, 12, FColor::Yellow, false, 2.f);
			DrawDebugLine(World, Hit.Location, Goal, FColor::Yellow, false, 2.f, 0, 2.f);
		}
	}

	// Project final onto navmesh
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (NavSys)
	{
		FNavLocation Projected;
		if (NavSys->ProjectPointToNavigation(Goal, Projected))
		{
			Goal = Projected.Location;
			return true;
		}
		UE_LOG(LogTemp, Warning, TEXT("ObsAvoidance: Could not project final location onto navmesh."));
		return false;
	}
	return false;
}
