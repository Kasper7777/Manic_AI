#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"  // Includes key selector definitions
#include "ManicFindActorInRegion.generated.h"

/**
 * Behaviour Tree Task that finds an actor of a specified class within a region (centre + radius).
 * The region centre can come from a Blackboard key (e.g. set by a previous task) or be manually specified.
 * It filters candidates to those with a specified boolean flag (e.g. "bIsFree") set to true.
 * The found actor is stored in a Blackboard key (object type) and its location optionally in a vector key.
 * The task retries the search a configurable number of times if no candidate is found.
 * Optionally, it draws debug spheres (in a user-selectable colour) to visualise the search area and selection.
 */
UCLASS()
class MANIC_AI_API UManicFindActorInRegion : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicFindActorInRegion();

	/** If true, use the CustomSearchLocation as the region centre; otherwise, use the Blackboard key. */
	UPROPERTY(EditAnywhere, Category = "Search")
	bool bUseCustomLocation;

	/** Manually specified region centre (used if bUseCustomLocation is true). */
	UPROPERTY(EditAnywhere, Category = "Search", meta = (EditCondition = "bUseCustomLocation"))
	FVector CustomSearchLocation;

	/** Blackboard key providing the region centre (used if bUseCustomLocation is false). Must be a Vector. */
	UPROPERTY(EditAnywhere, Category = "Search", meta = (EditCondition = "!bUseCustomLocation"))
	FBlackboardKeySelector SearchLocationKey;

	/** Radius around the region centre (in Unreal units) within which to search for a candidate actor. */
	UPROPERTY(EditAnywhere, Category = "Search", meta = (ClampMin = "0.0"))
	float SearchRadius;

	/** The class of actor to search for in the region. Only actors of this class (or subclass) are considered. */
	UPROPERTY(EditAnywhere, Category = "Filter")
	TSubclassOf<AActor> ActorClass;

	/** Name of the boolean property on candidate actors that indicates availability.
	 * Only actors with this flag true will be considered. Default is "bIsFree". */
	UPROPERTY(EditAnywhere, Category = "Filter")
	FName AvailabilityFlagName;

	/** Blackboard key where the found actor will be stored (object type). */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector FoundActorKey;

	/** Optional Blackboard key to store the found actor's location (vector type). */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector FoundActorLocationKey;

	/** Maximum number of search attempts (including the first) before failing the task. */
	UPROPERTY(EditAnywhere, Category = "Search", meta = (ClampMin = "1"))
	int32 MaxAttempts;

	/** Time interval (in seconds) between retry attempts. */
	UPROPERTY(EditAnywhere, Category = "Search", meta = (ClampMin = "0.0"))
	float RetryInterval;

	/** If true, debug spheres will be drawn to visualise the search region and candidate actor location. */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bEnableDebugDraw;

	/** Colour to use for debug drawing (choose a colour other than green). */
	UPROPERTY(EditAnywhere, Category = "Debug", meta = (EditCondition = "bEnableDebugDraw"))
	FColor DebugDrawColor;

protected:
	/** Memory structure to store retry data between ticks. */
	struct FManicFindActorInRegionMemory
	{
		/** Number of attempts made so far. */
		int32 AttemptsMade;
		/** Timestamp of the last attempt. */
		double LastAttemptTime;
	};

	/** Return the size of our instance memory. */
	virtual uint16 GetInstanceMemorySize() const override
	{
		return sizeof(FManicFindActorInRegionMemory);
	}

	/** Called when the task is executed. */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	/** Called each tick while the task is active (for retry logic). */
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	/** Called to initialise Blackboard key selectors from the asset's Blackboard. */
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;

	/** Performs one search attempt; returns a valid actor if found, otherwise nullptr. */
	AActor* FindActorInRegionAttempt(UBehaviorTreeComponent& OwnerComp);
};
