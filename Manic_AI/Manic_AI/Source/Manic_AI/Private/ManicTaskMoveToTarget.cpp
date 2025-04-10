#include "ManicTaskMoveToTarget.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"

UManicTaskMoveToTarget::UManicTaskMoveToTarget()
{
	NodeName = "Move To Target (Flexible)";
	bNotifyTick = true;

	InsideFactor     = 0.8f;    // e.g. 0.8 means 80% inside the bounding box
	AcceptableRadius = 50.f;
	MovementSpeed    = 600.f;
	ArrivalRadius    = 10.f;    // smaller default so we can get in close

	bDisableObstacleAvoidance = false;
	ObstacleCheckRadius       = 30.f;
	MinimumClearance          = 50.f;
	MaxAdjustmentIterations   = 5;

	MinMoveDistance    = 10.f;
	StuckTimeThreshold = 1.f;
	Timeout            = 10.f;

	bDrawDebug         = false;
	DebugSphereRadius  = 30.f;
	DebugDrawColour    = FColor::Orange;

	KeyMode = EMoveToKeyMode::Auto;
}

EBTNodeResult::Type UManicTaskMoveToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Log, TEXT("[%s] ExecuteTask."), *NodeName);

	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Error, TEXT("No AIController."));
		return EBTNodeResult::Failed;
	}
	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("No Pawn."));
		return EBTNodeResult::Failed;
	}
	UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
	if (!BBComp)
	{
		UE_LOG(LogTemp, Error, TEXT("No Blackboard Component."));
		return EBTNodeResult::Failed;
	}
	UWorld* World = AICon->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("No World context."));
		return EBTNodeResult::Failed;
	}

	bool bHasGoal = false;
	FVector PawnLoc = AIPawn->GetActorLocation();
	FVector FinalGoal = FVector::ZeroVector;

	AActor* FoundActor = nullptr;

	// 1) Decide which key to read (Actor vs. Location)
	switch (KeyMode)
	{
	case EMoveToKeyMode::UseActor:
	{
		FoundActor = Cast<AActor>(BBComp->GetValueAsObject(TargetActorKey.SelectedKeyName));
		if (FoundActor)
		{
			bHasGoal = true;
		}
	}
	break;

	case EMoveToKeyMode::UseLocation:
		// We'll do location below
		break;

	case EMoveToKeyMode::Auto:
	default:
	{
		AActor* TempActor = Cast<AActor>(BBComp->GetValueAsObject(TargetActorKey.SelectedKeyName));
		if (TempActor)
		{
			FoundActor = TempActor;
			bHasGoal   = true;
		}
	}
	break;
	}

	// 2) If we haven’t found an actor yet, do location approach
	if (!bHasGoal && KeyMode != EMoveToKeyMode::UseActor)
	{
		FVector BBLoc = BBComp->GetValueAsVector(TargetLocationKey.SelectedKeyName);
		if (!BBLoc.IsNearlyZero())
		{
			FVector Dir = (BBLoc - PawnLoc).GetSafeNormal();
			FinalGoal   = BBLoc + Dir * AcceptableRadius;

			UE_LOG(LogTemp, Log, TEXT("Using LocationKey: %s => finalGoal=%s"),
				*BBLoc.ToString(), *FinalGoal.ToString());
			bHasGoal = true;
		}
	}

	// 3) If we found an actor, do bounding-box approach
	if (FoundActor)
	{
		FVector ActorLoc = FoundActor->GetActorLocation();
		FBox ActorBounds  = FoundActor->GetComponentsBoundingBox();
		float ActorRadius = ActorBounds.GetExtent().GetMax();

		// Negative InsideFactor => goes beyond center if physically possible
		//  e.g. -0.5 => 50% PAST the center
		float StopDist = ActorRadius * InsideFactor;

		// Direction from actor to pawn
		FVector Dir = (PawnLoc - ActorLoc).GetSafeNormal();
		FinalGoal = ActorLoc + Dir * StopDist;

		UE_LOG(LogTemp, Log, TEXT("Using ActorKey: Actor=%s, radius=%.1f, InsideFactor=%.2f => finalGoal=%s"),
			*FoundActor->GetName(), ActorRadius, InsideFactor, *FinalGoal.ToString());

		bHasGoal = true;  // just to be explicit
	}

	if (!bHasGoal && !FoundActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("No valid goal from KeyMode=%d"), (int32)KeyMode);
		return EBTNodeResult::Failed;
	}

	// 4) Obstacle avoidance if not disabled
	if (!bDisableObstacleAvoidance)
	{
		if (!AdjustGoalForObstacles(AIPawn, FoundActor, FinalGoal, World))
		{
			UE_LOG(LogTemp, Warning, TEXT("Could not adjust goal for obstacles, failing."));
			return EBTNodeResult::Failed;
		}
	}

	// 5) Save final goal in node memory
	FManicTaskMoveToTargetMemory* MyMem = reinterpret_cast<FManicTaskMoveToTargetMemory*>(NodeMemory);
	MyMem->DesiredStopLocation = FinalGoal;
	MyMem->LastPosition        = PawnLoc;
	MyMem->StuckTime           = 0.f;
	MyMem->ElapsedTime         = 0.f;

	// 6) Set movement speed
	if (ACharacter* Char = Cast<ACharacter>(AIPawn))
	{
		if (UCharacterMovementComponent* MoveComp = Char->GetCharacterMovement())
		{
			MoveComp->MaxWalkSpeed = MovementSpeed;
		}
	}

	// 7) MoveTo request with small ArrivalRadius
	FAIMoveRequest MoveReq;
	MoveReq.SetGoalLocation(FinalGoal);
	MoveReq.SetAcceptanceRadius(ArrivalRadius);  // e.g. 10 by default
	MoveReq.SetUsePathfinding(true);
	MoveReq.SetAllowPartialPath(true);

	EPathFollowingRequestResult::Type MoveResult = AICon->MoveTo(MoveReq);
	if (MoveResult == EPathFollowingRequestResult::Failed)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveTo request failed (no path?)."));
		return EBTNodeResult::Failed;
	}

	// Debug
	if (bDrawDebug)
	{
		DrawDebugSphere(World, FinalGoal, DebugSphereRadius, 12, DebugDrawColour, false, 3.f);
		DrawDebugLine(World, PawnLoc, FinalGoal, DebugDrawColour, false, 3.f, 0, 2.f);
	}

	return EBTNodeResult::InProgress;
}

void UManicTaskMoveToTarget::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FManicTaskMoveToTargetMemory* MyMem = reinterpret_cast<FManicTaskMoveToTargetMemory*>(NodeMemory);

	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}
	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	const FVector CurrentPos = AIPawn->GetActorLocation();
	const float DistToGoal   = FVector::Dist(CurrentPos, MyMem->DesiredStopLocation);
	const float MovedThisTick= FVector::Dist(MyMem->LastPosition, CurrentPos);

	// Stuck detection
	if (MovedThisTick < MinMoveDistance)
	{
		MyMem->StuckTime += DeltaSeconds;
	}
	else
	{
		MyMem->StuckTime   = 0.f;
		MyMem->LastPosition= CurrentPos;
	}
	MyMem->ElapsedTime += DeltaSeconds;

	// Timeout
	if (Timeout > 0.f && MyMem->ElapsedTime >= Timeout)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveToTarget => Timed out (%.2f sec)."), MyMem->ElapsedTime);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// Stuck
	if (StuckTimeThreshold > 0.f && MyMem->StuckTime >= StuckTimeThreshold)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveToTarget => Pawn stuck for %.1f sec"), MyMem->StuckTime);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// Arrived
	if (DistToGoal <= ArrivalRadius)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveToTarget => Arrived! Dist=%.1f <= %.1f"), DistToGoal, ArrivalRadius);
		AICon->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

bool UManicTaskMoveToTarget::AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& InOutGoal, UWorld* World) const
{
	if (!World) return false;

	FCollisionQueryParams Params(FName(TEXT("MoveToTrace")), false, AIPawn);
	if (TargetActor)
	{
		// Don’t collide with the target actor’s mesh so we can push inside if needed
		Params.AddIgnoredActor(TargetActor);
	}

	FVector Start = AIPawn->GetActorLocation();
	FHitResult Hit;
	bool bBlocked = World->LineTraceSingleByChannel(Hit, Start, InOutGoal, ECC_Visibility, Params);
	if (bBlocked && bDrawDebug)
	{
		DrawDebugLine(World, Start, Hit.Location, FColor::Red, false, 2.f, 0, 2.f);
		DrawDebugSphere(World, Hit.Location, 20.f, 12, FColor::Red, false, 2.f);
	}

	// Repeated sphere sweep
	for (int32 i = 0; i < MaxAdjustmentIterations; i++)
	{
		bool bOverlap = World->SweepSingleByChannel(
			Hit,
			InOutGoal,
			InOutGoal,
			FQuat::Identity,
			ECC_Visibility,
			FCollisionShape::MakeSphere(ObstacleCheckRadius),
			Params
		);
		if (!bOverlap) break;

		InOutGoal += Hit.Normal * (MinimumClearance + 10.f);

		if (bDrawDebug)
		{
			DrawDebugSphere(World, Hit.Location, 25.f, 8, FColor::Yellow, false, 1.5f);
			DrawDebugLine(World, Hit.Location, InOutGoal, FColor::Yellow, false, 1.5f, 0, 2.f);
		}
	}

	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (NavSys)
	{
		FNavLocation Projected;
		if (NavSys->ProjectPointToNavigation(InOutGoal, Projected))
		{
			InOutGoal = Projected.Location;
			return true;
		}
		UE_LOG(LogTemp, Warning, TEXT("Could not project final location onto NavMesh."));
		return false;
	}
	return false;
}
