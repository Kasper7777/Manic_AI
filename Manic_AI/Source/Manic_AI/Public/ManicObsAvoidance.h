#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicObsAvoidance.generated.h"

// Memory struct for storing the computed goal and stuck tracking.
struct FManicObsAvoidanceMemory
{
	// The final goal computed.
	FVector DesiredGoal = FVector::ZeroVector;
	// The last recorded pawn position.
	FVector LastPosition = FVector::ZeroVector;
	// Accumulated time that the pawn appears stuck.
	float StuckTime = 0.f;
	// Elapsed time (optional timeout).
	float ElapsedTime = 0.f;
};

UENUM(BlueprintType)
enum class ETargetType : uint8
{
	BlackboardLocation UMETA(DisplayName = "Blackboard Location"),
	BlackboardActor    UMETA(DisplayName = "Blackboard Actor"),
	StaticActor        UMETA(DisplayName = "Static Actor")
};

UCLASS()
class MANIC_AI_API UManicObsAvoidance : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicObsAvoidance();

	// Execute the task and tick it using our memory struct.
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual uint16 GetInstanceMemorySize() const override;

protected:
	// Adjust the goal if obstacles are detected. Returns true if the final goal is valid.
	bool AdjustGoalForObstacles(APawn* AIPawn, AActor* TargetActor, FVector& Goal, UWorld* World);

public:
	// Target selection.
	UPROPERTY(EditAnywhere, Category = "Targeting")
	ETargetType TargetType;

	// Blackboard keys (used when TargetType is BlackboardLocation or BlackboardActor).
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetActorKey;

	// When TargetType is StaticActor, pick an actor from the level.
	// Using a soft reference lets you select any actor (including Blueprint-generated ones) without a hard dependency.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowedClasses = "Actor"))
	TSoftObjectPtr<AActor> StaticTargetActor;

	// Movement parameters.
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed;

	// Obstacle avoidance parameters.
	UPROPERTY(EditAnywhere, Category = "Avoidance")
	float ObstacleCheckRadius;

	UPROPERTY(EditAnywhere, Category = "Avoidance")
	float MinimumClearance;

	UPROPERTY(EditAnywhere, Category = "Avoidance")
	int32 MaxAdjustmentIterations;

	// Additional targeting parameters.
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float AcceptableRadius;

	UPROPERTY(EditAnywhere, Category = "Targeting")
	float InsideFactor;

	// Arrival threshold: if pawn is within this many units of goal, consider it arrived.
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float ArrivalThreshold = 30.f;

	// Debug options.
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebug;

	UPROPERTY(EditAnywhere, Category = "Debug")
	float DebugSphereRadius;

	UPROPERTY(EditAnywhere, Category = "Debug")
	FColor DebugDrawColour;

	// Flag to disable obstacle avoidance for testing.
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDisableObstacleAvoidance;

	// Stuck detection parameters.
	// The minimum distance (in units) considered as "moving".
	UPROPERTY(EditAnywhere, Category = "Stuck Detection")
	float MinMoveDistance = 10.f;
	// Time threshold (in seconds) after which the pawn is considered stuck.
	UPROPERTY(EditAnywhere, Category = "Stuck Detection")
	float StuckTimeThreshold = 1.0f;
	// A small random offset applied to the goal when repathing.
	UPROPERTY(EditAnywhere, Category = "Stuck Detection")
	float RepelOffset = 30.f;
	// Optional: timeout (in seconds) after which the task completes regardless.
	UPROPERTY(EditAnywhere, Category = "Stuck Detection")
	float Timeout = 10.f;
};
