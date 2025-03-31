#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicInteract.generated.h"

// Memory struct for storing interaction state (if we wait).
struct FManicInteractMemory
{
	bool bIsInteracting;
	float ElapsedTime;
};

UENUM(BlueprintType)
enum class EInteractTargetType : uint8
{
	BlackboardActor UMETA(DisplayName="Blackboard Actor"),
	StaticActor     UMETA(DisplayName="Static Actor")
};

/**
 * A simple Behaviour Tree task that calls PerformGenericAction on ManicAiController.
 * No fallback logic - if we fail to cast the AIController, the node fails immediately.
 */
UCLASS()
class MANIC_AI_API UManicInteract : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicInteract();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual uint16 GetInstanceMemorySize() const override;

public:
	// Decide where we get our interactable actor from
	UPROPERTY(EditAnywhere, Category="Interact")
	EInteractTargetType TargetType;

	// If TargetType == BlackboardActor, pick the blackboard key
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TargetActorKey;

	// If TargetType == StaticActor, pick the actor from the node details
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interact", meta=(AllowedClasses="Actor"))
	TSoftObjectPtr<AActor> StaticTargetActor;

	// The name of the action (e.g. "Interact", "Sit", etc.)
	UPROPERTY(EditAnywhere, Category="Action")
	FName ActionName;

	// If > 0, we wait that many seconds before finishing
	UPROPERTY(EditAnywhere, Category="Timing")
	float InteractionDuration;

	// If true, we remain in progress for InteractionDuration
	UPROPERTY(EditAnywhere, Category="Timing")
	bool bWaitAfterInteraction;
};
