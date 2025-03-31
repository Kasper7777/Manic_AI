#include "ManicTaskFindSpotInArea.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"

UManicTaskFindSpotInArea::UManicTaskFindSpotInArea()
{
	NodeName = "Find Spot in Area";
}

EBTNodeResult::Type UManicTaskFindSpotInArea::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// 1) Get AI Controller & Blackboard
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

	// 2) Determine the area centre
	FVector Centre = AreaCenter;
	if (Centre.IsNearlyZero())
	{
		// Fallback: if AreaCenter is zero, use AI Pawn’s location
		APawn* AIPawn = AICon->GetPawn();
		if (!AIPawn)
		{
			return EBTNodeResult::Failed;
		}
		Centre = AIPawn->GetActorLocation();
	}

	// 3) Acquire the Navigation System
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

	// 4) Find a reachable point within the radius
	FNavLocation FoundNavLocation;
	bool bFoundLocation = NavSys->GetRandomReachablePointInRadius(Centre, SearchRadius, FoundNavLocation);

	// 5) If that fails, project the centre onto the navmesh
	if (!bFoundLocation)
	{
		FNavLocation ProjectedLocation;
		const FVector QueryExtent(SearchRadius, SearchRadius, SearchRadius);
		bool bProjected = NavSys->ProjectPointToNavigation(Centre, ProjectedLocation, QueryExtent);
		if (bProjected)
		{
			FoundNavLocation = ProjectedLocation;
			bFoundLocation = true;
		}
		else
		{
			// Final fallback: just use the centre
			FoundNavLocation.Location = Centre;
			bFoundLocation = true;
		}
	}

	// 6) Apply optional offset
	FVector FinalLocation = FoundNavLocation.Location + LocationOffset;

	// 7) Write the location to the Blackboard
	BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, FinalLocation);

	// 8) Optionally draw debug
	if (bDrawDebugSphere)
	{
		DrawDebugSphere(World, FinalLocation, DebugSphereRadius, 12, FColor::Blue, false, 5.0f);
		DrawDebugLine(World, Centre, FinalLocation, FColor::Blue, false, 5.0f, 0, 1.5f);
	}

	// 9) Return Succeeded so the Behaviour Tree can continue
	return EBTNodeResult::Succeeded;
}
