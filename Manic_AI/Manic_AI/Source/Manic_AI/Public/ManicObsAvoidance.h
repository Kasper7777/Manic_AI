#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicObsAvoidance.generated.h"

/**
 * Internal struct used as per-instance memory for UManicObsAvoidance.
 * Stores the final computed goal, last known position for stuck detection, etc.
 */
USTRUCT()
struct FManicObsAvoidanceMemory
{
	GENERATED_BODY()

	/** The final goal computed by the task. */
	FVector DesiredGoal = FVector::ZeroVector;

	/** The last recorded pawn position. */
	FVector LastPosition = FVector::ZeroVector;

	/** Accumulated time that the pawn has not moved enough (stuck detection). */
	float StuckTime = 0.f;

	/** Elapsed time (optional overall timeout). */
	float ElapsedTime = 0.f;
};

/** 
 * Which target source type to use when computing the move-to location.
 * - BlackboardLocation: read a Vector key from blackboard
 * - BlackboardActor: read an Actor key from blackboard
 * - StaticActor: use a soft reference set in the node’s properties
 */
UENUM(BlueprintType)
enum class ETargetType : uint8
{
	BlackboardLocation UMETA(DisplayName = "Blackboard Location"),
	BlackboardActor    UMETA(DisplayName = "Blackboard Actor"),
	StaticActor        UMETA(DisplayName = "Static Actor")
};

/**
 * A Behavior Tree Task that:
 * - Selects a final movement goal from either a blackboard actor, blackboard vector, or a static (soft) actor reference.
 * - Optionally offsets near an actor's bounding box (using InsideFactor).
 * - Optionally does line/sphere sweeps to nudge the final goal away from obstacles.
 * - Moves the AI to that location, monitoring for stuckness or a time-out.
 */
UCLASS()
class MANIC_AI_API UManicObsAvoidance : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicObsAvoidance();

	/** Return the per-instance memory size (the size of FManicObsAvoidanceMemory). */
	virtual uint16 GetInstanceMemorySize() const override;

protected:
	/** Called when the task starts (when node is entered in the Behavior Tree). */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	/** Called every tick while the task is in progress. */
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	/** 
	 * Attempts to adjust the final goal away from obstacles via line trace & sphere sweeps.
	 * @return true if final location is valid after adjustments, false if we can't find a valid spot.
	 */
	bool AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& Goal, UWorld* World);

public:
	/** Which type of target do we read from: blackboard vector, blackboard actor, or a static actor? */
	UPROPERTY(EditAnywhere, Category="Targeting")
	ETargetType TargetType;

	/** Blackboard key if we want to read a Vector location from blackboard. */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	/** Blackboard key if we want to read an Actor from blackboard. */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TargetActorKey;

	/** If using a static actor reference (no blackboard), specify it here. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(AllowedClasses="Actor"))
	TSoftObjectPtr<AActor> StaticTargetActor;

	/** Movement speed to set on the AI's character movement for the duration of this task. */
	UPROPERTY(EditAnywhere, Category="Movement")
	float MovementSpeed;

	/** If true, skip all obstacle avoidance logic. */
	UPROPERTY(EditAnywhere, Category="Avoidance")
	bool bDisableObstacleAvoidance;

	/** Sphere radius for the obstacle overlap checks (if not disabled). */
	UPROPERTY(EditAnywhere, Category="Avoidance", meta=(EditCondition="!bDisableObstacleAvoidance"))
	float ObstacleCheckRadius;

	/** Minimum extra clearance offset when adjusting away from obstacles. */
	UPROPERTY(EditAnywhere, Category="Avoidance", meta=(EditCondition="!bDisableObstacleAvoidance"))
	float MinimumClearance;

	/** How many times we can attempt to nudge away from obstacles before giving up. */
	UPROPERTY(EditAnywhere, Category="Avoidance", meta=(EditCondition="!bDisableObstacleAvoidance"))
	int32 MaxAdjustmentIterations;

	/** If using a blackboard actor, we'll move to its bounding box plus InsideFactor. 
	    e.g. InsideFactor=0.8 means 80% inside the bounding volume from the center. */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float InsideFactor;

	/** If using a blackboard vector, offset the final location by AcceptableRadius
	    so we don't overshoot it. */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float AcceptableRadius;

	/** Arrival threshold. If the AI is within this distance of the goal, we consider it "arrived." */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float ArrivalThreshold;

	/** Minimum distance the pawn must move each tick to avoid "stuck" time. */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float MinMoveDistance;

	/** Time threshold in seconds. If stuck time accumulates beyond this, we fail. */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float StuckTimeThreshold;

	/** A small offset used if we want to do some random repel logic (not currently used in the sample code). */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float RepelOffset;

	/** Overall time limit for the task. After this many seconds, we stop & succeed (or fail). */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float Timeout;

	/** If true, draws debug lines & spheres to visualize path, final goal, etc. */
	UPROPERTY(EditAnywhere, Category="Debug")
	bool bDrawDebug;

	/** Radius of debug spheres. */
	UPROPERTY(EditAnywhere, Category="Debug", meta=(EditCondition="bDrawDebug"))
	float DebugSphereRadius;

	/** Color for debug lines & spheres. */
	UPROPERTY(EditAnywhere, Category="Debug", meta=(EditCondition="bDrawDebug"))
	FColor DebugDrawColour;
};
