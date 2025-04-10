#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicTaskFindFreeActor.generated.h"

/** Memory structure used to store the start time and the random delay for the task. */
USTRUCT()
struct FManicTaskFindFreeActorMemory
{
	GENERATED_BODY()

	/** The time (in seconds) when the delay phase began. */
	double StartTime;

	/** The random delay chosen for this task instance. */
	float SelectedDelay;
};

/** Controls how we write the found actor to the Blackboard. */
UENUM(BlueprintType)
enum class EFreeActorWriteMode : uint8
{
	/** Write only to the Actor key */
	ActorOnly UMETA(DisplayName="Actor Only"),
	/** Write only to the Location key */
	LocationOnly UMETA(DisplayName="Location Only"),
	/** Write both Actor and Location keys */
	ActorAndLocation UMETA(DisplayName="Actor & Location"),
};

/**
 * Behaviour Tree Task that finds the closest free target actor of a specified class,
 * while checking a configurable avoid list. After selecting a free candidate,
 * the task waits for a random delay (between MinSelectionDelay and MaxSelectionDelay)
 * before finalizing.
 */
UCLASS()
class MANIC_AI_API UManicTaskFindFreeActor : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManicTaskFindFreeActor();

	/** Minimum delay (in seconds) before finalizing target selection. */
	UPROPERTY(EditAnywhere, Category = "Timing")
	float MinSelectionDelay;

	/** Maximum delay (in seconds) before finalizing target selection. */
	UPROPERTY(EditAnywhere, Category = "Timing")
	float MaxSelectionDelay;

	/**
	 * Which Blackboard keys to write (Actor only, Location only, or both).
	 */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	EFreeActorWriteMode WriteMode;

protected:
	/** Blackboard key selector for storing the chosen target actor. */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetActorKey;

	/** Blackboard key selector that provides the class of actor to find. */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetClassKey;

	/** Optional: Blackboard key selector to store the chosen actor's location. */
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	/** Array of actors to avoid; if any actor in this list is within AvoidanceRadius of a candidate, that candidate is skipped. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avoidance")
	TArray<TSoftObjectPtr<AActor>> AvoidActors;

	/** The radius within which any actor from AvoidActors causes a candidate to be skipped. */
	UPROPERTY(EditAnywhere, Category = "Avoidance")
	float AvoidanceRadius;

	// ExecuteTask override: Finds a free candidate and starts the random delay.
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	// TickTask override: Waits until the random delay has elapsed before finalizing the target selection.
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	// Allocate node memory to store our delay data.
	virtual uint16 GetInstanceMemorySize() const override { return sizeof(FManicTaskFindFreeActorMemory); }

private:
	// Returns true if any NPC (other than our pawn) already has Candidate as its target.
	bool IsCandidateAlreadyTargeted(AActor* Candidate, UWorld* World, APawn* MyPawn) const;
};
