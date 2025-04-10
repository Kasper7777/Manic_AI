#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ManicTaskGoToLocation.generated.h"

/** Structure to hold per-instance memory for this task. */
USTRUCT()
struct FManicTaskGoToLocationMemory
{
	GENERATED_BODY()

	/** Time when movement started. */
	double StartTime;

	/** The target location computed by this node. */
	FVector TargetLocation;
};

UCLASS()
class MANIC_AI_API UManicTaskGoToLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicTaskGoToLocation();

	/** The centre of the designated area. Set this directly on the node in the Behavior Tree editor. */
	UPROPERTY(EditAnywhere, Category = "Area")
	FVector AreaCenter = FVector::ZeroVector;

	/** Radius around AreaCenter in which to search for a navigable point. */
	UPROPERTY(EditAnywhere, Category = "Area", meta = (ClampMin = "0.0"))
	float SearchRadius = 1000.0f;

	/** Optional 3D offset to adjust the final location. */
	UPROPERTY(EditAnywhere, Category = "Area")
	FVector LocationOffset = FVector::ZeroVector;

	/** Blackboard key where the resulting location will be stored. */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	/** If true, draws a debug sphere at the chosen location. */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebugSphere = false;

	/** Size of the debug sphere if bDrawDebugSphere is enabled. */
	UPROPERTY(EditAnywhere, Category = "Debug", meta = (ClampMin = "0.0"))
	float DebugSphereRadius = 50.f;

	/** Acceptance radius to consider the NPC has reached the target location. */
	UPROPERTY(EditAnywhere, Category = "Movement", meta = (ClampMin = "0.0"))
	float AcceptanceRadius = 100.f;

	/** Maximum time (in seconds) to wait for the NPC to reach the target location before reattempting. */
	UPROPERTY(EditAnywhere, Category = "Movement", meta = (ClampMin = "0.0"))
	float MaxWaitTime = 10.f;

protected:
	/** Called when this task is executed by the Behavior Tree. */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	/** Ticks the task while waiting for the NPC to reach the target location. */
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	/** Size of per-instance memory required. */
	virtual uint16 GetInstanceMemorySize() const override;
};
