#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicTaskMoveToTarget.generated.h"

USTRUCT()
struct FManicTaskMoveToTargetMemory
{
	GENERATED_BODY()

	FVector DesiredStopLocation;
	FVector LastPosition;
	float StuckTime;
	float ElapsedTime;
};

/** Which blackboard key(s) we read to compute the goal. */
UENUM(BlueprintType)
enum class EMoveToKeyMode : uint8
{
	/** Only read ActorKey to find the final location. */
	UseActor UMETA(DisplayName="Use Actor"),
	/** Only read LocationKey to find the final location. */
	UseLocation UMETA(DisplayName="Use Location"),
	/**
	 * If ActorKey is set (non-null), use it. Otherwise, use LocationKey.
	 * "Auto" or "whichever is set first."
	 */
	Auto UMETA(DisplayName="Auto (Actor if set, else Location)"),
};

UCLASS()
class MANIC_AI_API UManicTaskMoveToTarget : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicTaskMoveToTarget();

	/**
	 * If using a TargetActor, we compute the final location by:
	 *   float StopDist = ActorRadius * InsideFactor;
	 * Then we offset from the actor’s center in the direction (Pawn->Actor).
	 *
	 *  - InsideFactor < 1 => inside the bounding box
	 *  - InsideFactor = 1 => roughly at bounding‐box surface
	 *  - InsideFactor > 1 => outside the bounding box
	 *  - InsideFactor < 0 => beyond the center (if physically possible)
	 */
	UPROPERTY(EditAnywhere, Category="Movement")
	float InsideFactor;

	/** If using a TargetLocation, offset that location by AcceptableRadius in direction (Pawn->Location). */
	UPROPERTY(EditAnywhere, Category="Movement")
	float AcceptableRadius;

	/** The AI’s walk speed for the duration of this move. */
	UPROPERTY(EditAnywhere, Category="Movement")
	float MovementSpeed;

	/**
	 * The radius at which we consider the AI to have arrived.
	 * If you want them “hugging” the object, make this small (5–20).
	 */
	UPROPERTY(EditAnywhere, Category="Movement")
	float ArrivalRadius;

	/** Blackboard key for the target actor. */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TargetActorKey;

	/** Blackboard key for the target location. */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	/** Which key we actually read at runtime (UseActor, UseLocation, or Auto). */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	EMoveToKeyMode KeyMode;

	/** If false, do line-trace + sphere-sweep obstacle avoidance. */
	UPROPERTY(EditAnywhere, Category="Obstacle")
	bool bDisableObstacleAvoidance;

	UPROPERTY(EditAnywhere, Category="Obstacle", meta=(EditCondition="!bDisableObstacleAvoidance"))
	float ObstacleCheckRadius;

	UPROPERTY(EditAnywhere, Category="Obstacle", meta=(EditCondition="!bDisableObstacleAvoidance"))
	float MinimumClearance;

	UPROPERTY(EditAnywhere, Category="Obstacle", meta=(EditCondition="!bDisableObstacleAvoidance"))
	int32 MaxAdjustmentIterations;

	/** Stuck detection. If we move less than this each tick, we accumulate stuck time. */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float MinMoveDistance;

	/** If stuck time exceeds this, we fail. */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float StuckTimeThreshold;

	/** Overall time limit for the task. If we exceed it, we fail. */
	UPROPERTY(EditAnywhere, Category="Stuck Detection")
	float Timeout;

	/** Debug draws. */
	UPROPERTY(EditAnywhere, Category="Debug")
	bool bDrawDebug;

	UPROPERTY(EditAnywhere, Category="Debug", meta=(EditCondition="bDrawDebug"))
	float DebugSphereRadius;

	UPROPERTY(EditAnywhere, Category="Debug", meta=(EditCondition="bDrawDebug"))
	FColor DebugDrawColour;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual uint16 GetInstanceMemorySize() const override { return sizeof(FManicTaskMoveToTargetMemory); }

private:
	bool AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& InOutGoal, UWorld* World) const;
};
