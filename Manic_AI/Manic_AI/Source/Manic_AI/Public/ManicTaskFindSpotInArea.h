#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ManicTaskFindSpotInArea.generated.h"

/**
 * A Behaviour Tree task that finds a reachable location within a specified area 
 * (defined by AreaCenter + SearchRadius) and writes it to a Blackboard key. 
 * Does NOT move the AI—just sets the Blackboard variable so subsequent tasks 
 * can use it (e.g., a MoveTo node).
 */
UCLASS()
class MANIC_AI_API UManicTaskFindSpotInArea : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicTaskFindSpotInArea();

	/** The centre of the area to search. If zero, we fall back to the AI Pawn’s location. */
	UPROPERTY(EditAnywhere, Category = "Area")
	FVector AreaCenter;

	/** Radius around AreaCenter in which to search for a reachable point. */
	UPROPERTY(EditAnywhere, Category = "Area", meta = (ClampMin = "0.0"))
	float SearchRadius = 1000.0f;

	/** Optional offset to add to the found location (e.g. to nudge the final position). */
	UPROPERTY(EditAnywhere, Category = "Area")
	FVector LocationOffset;

	/** Blackboard key to store the found location. Must be a Vector key. */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	/** If true, draws debug spheres/lines so you can visualise the chosen spot. */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebugSphere = false;

	/** Radius of the debug sphere (if bDrawDebugSphere is enabled). */
	UPROPERTY(EditAnywhere, Category = "Debug", meta = (ClampMin = "0.0", EditCondition = "bDrawDebugSphere"))
	float DebugSphereRadius = 50.f;

protected:
	/** Called when this task is executed by the Behaviour Tree. */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
