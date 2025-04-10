// ManicTaskFindActor.h - Corrected version with improved comments and usage instructions.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManicTaskFindActor.generated.h"

/**
 * Behaviour Tree Task that finds the closest actor of a given class (specified in the Blackboard),
 * then stores that actor and optionally its location in the Blackboard.
 */
UCLASS()
class MANIC_AI_API UManicTaskFindActor : public UBTTaskNode
{
    GENERATED_BODY()

public:
    UManicTaskFindActor();

protected:
    // ExecuteTask override: called when the task is executed in the Behavior Tree
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
    // Blackboard key selector for storing the found Actor reference
    UPROPERTY(EditAnywhere, Category = "Blackboard")
    FBlackboardKeySelector TargetActorKey;

    // Blackboard key selector that provides the class of actor to find.
    // **Ensure the Blackboard asset defines this key as a Class or Object type and that a value is set before running this task.**
    UPROPERTY(EditAnywhere, Category = "Blackboard")
    FBlackboardKeySelector TargetClassKey;

    // Optional: Blackboard key selector to store the found actor's location (must be of Vector type in the Blackboard)
    UPROPERTY(EditAnywhere, Category = "Blackboard")
    FBlackboardKeySelector TargetLocationKey;
};
