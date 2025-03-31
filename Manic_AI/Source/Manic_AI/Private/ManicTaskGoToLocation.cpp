#include "ManicTaskGoToLocation.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "Navigation/PathFollowingComponent.h" 

UManicTaskGoToLocation::UManicTaskGoToLocation()
{
	// Enable ticking so we can check progress.
	bNotifyTick = true;
	NodeName = "Find and Move to Spot in Area";
}

uint16 UManicTaskGoToLocation::GetInstanceMemorySize() const
{
	return sizeof(FManicTaskGoToLocationMemory);
}

EBTNodeResult::Type UManicTaskGoToLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// 1) Get the AI Controller and Blackboard.
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return EBTNodeResult::Failed;
	}

	// 2) Use the AreaCenter property set on the node.
	FVector Center = AreaCenter;
	UE_LOG(LogTemp, Log, TEXT("ManicTaskGoToLocation: Using AreaCenter = %s"), *Center.ToString());
	// If AreaCenter is not set, fallback to Pawn location.
	if (Center.IsNearlyZero())
	{
		if (APawn* Pawn = AICon->GetPawn())
		{
			Center = Pawn->GetActorLocation();
			UE_LOG(LogTemp, Warning, TEXT("ManicTaskGoToLocation: AreaCenter was zero. Falling back to Pawn location: %s"), *Center.ToString());
		}
		else
		{
			return EBTNodeResult::Failed;
		}
	}

	// 3) Get the world and Navigation System.
	UWorld* World = AICon->GetWorld();
	if (!World)
	{
		return EBTNodeResult::Failed;
	}
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (!NavSys)
	{
		return EBTNodeResult::Failed;
	}

	// 4) Find a reachable point within the SearchRadius around the centre.
	FNavLocation FoundNavLocation;
	bool bFoundLocation = NavSys->GetRandomReachablePointInRadius(Center, SearchRadius, FoundNavLocation);

	// 5) If the random query fails, attempt to project the centre onto the navmesh.
	if (!bFoundLocation)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicTaskGoToLocation: Failed to find a reachable point in radius %f. Attempting to project centre: %s"), SearchRadius, *Center.ToString());
		FNavLocation ProjectedLocation;
		FVector QueryExtent = FVector(SearchRadius, SearchRadius, SearchRadius);
		bool bProjected = NavSys->ProjectPointToNavigation(Center, ProjectedLocation, QueryExtent);
		if (bProjected)
		{
			FoundNavLocation = ProjectedLocation;
			bFoundLocation = true;
			UE_LOG(LogTemp, Warning, TEXT("ManicTaskGoToLocation: Successfully projected centre to %s."), *FoundNavLocation.Location.ToString());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ManicTaskGoToLocation: Projection failed. Using centre as fallback."));
			FoundNavLocation.Location = Center;
			bFoundLocation = true;
		}
	}

	// 6) Apply the optional offset.
	const FVector FinalLocation = FoundNavLocation.Location + LocationOffset;

	// 7) Write the final location to the Blackboard.
	BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, FinalLocation);

	// 8) Command the AI to move to the final location.
	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(FinalLocation);
	MoveRequest.SetAcceptanceRadius(AcceptanceRadius);
	FNavPathSharedPtr NavPath;
	EPathFollowingRequestResult::Type MoveResult = AICon->MoveTo(MoveRequest, &NavPath);
	UE_LOG(LogTemp, Log, TEXT("ManicTaskGoToLocation: MoveTo request returned code %d."), static_cast<int32>(MoveResult));

	// 9) Initialize node memory with the target location and start time.
	FManicTaskGoToLocationMemory* MyMemory = reinterpret_cast<FManicTaskGoToLocationMemory*>(NodeMemory);
	MyMemory->StartTime = FPlatformTime::Seconds();
	MyMemory->TargetLocation = FinalLocation;

	// 10) Optionally draw debug info.
	if (bDrawDebugSphere)
	{
		DrawDebugSphere(World, FinalLocation, DebugSphereRadius, 12, FColor::Green, false, 5.0f);
		DrawDebugLine(World, Center, FinalLocation, FColor::Green, false, 5.0f, 0, 1.5f);
	}

	UE_LOG(LogTemp, Log, TEXT("ManicTaskGoToLocation: Found location %s within radius %.1f"), *FinalLocation.ToString(), SearchRadius);
	return EBTNodeResult::InProgress;
}

void UManicTaskGoToLocation::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	APawn* Pawn = AICon->GetPawn();
	if (!Pawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// Retrieve the target location and the time when movement started.
	FManicTaskGoToLocationMemory* MyMemory = reinterpret_cast<FManicTaskGoToLocationMemory*>(NodeMemory);
	FVector TargetLocation = MyMemory->TargetLocation;
	double ElapsedTime = FPlatformTime::Seconds() - MyMemory->StartTime;

	// Check if the NPC is close enough to the target.
	float Distance = FVector::Dist(Pawn->GetActorLocation(), TargetLocation);
	if (Distance <= AcceptanceRadius)
	{
		UE_LOG(LogTemp, Log, TEXT("ManicTaskGoToLocation: NPC reached target location %s."), *TargetLocation.ToString());
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	// If too much time has elapsed without reaching the target, reattempt to find a new location.
	if (ElapsedTime >= MaxWaitTime)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicTaskGoToLocation: NPC failed to reach target in %.2f seconds. Reattempting location search."), ElapsedTime);
		AICon->StopMovement();
		// Re-run the ExecuteTask logic to get a new location.
		EBTNodeResult::Type Result = ExecuteTask(OwnerComp, NodeMemory);
		if (Result != EBTNodeResult::InProgress)
		{
			FinishLatentTask(OwnerComp, Result);
		}
		return;
	}
}
