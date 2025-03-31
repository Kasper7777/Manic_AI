#include "ManicInteract.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Pawn.h"
#include "ManicAiController.h"

UManicInteract::UManicInteract()
{
	NodeName = "Manic: Interact";
	bNotifyTick = true;

	// Default settings
	TargetType = EInteractTargetType::BlackboardActor;
	ActionName = FName("Interact");
	InteractionDuration = 2.0f;
	bWaitAfterInteraction = true;
}

uint16 UManicInteract::GetInstanceMemorySize() const
{
	return sizeof(FManicInteractMemory);
}

EBTNodeResult::Type UManicInteract::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FManicInteractMemory* MyMem = reinterpret_cast<FManicInteractMemory*>(NodeMemory);
	MyMem->bIsInteracting = false;
	MyMem->ElapsedTime = 0.f;

	// -- 1) Validate AI Controller --
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Error, TEXT("%s: No AIController found!"), *NodeName);
		return EBTNodeResult::Failed;
	}

	AManicAiController* MyController = Cast<AManicAiController>(AICon);
	if (!MyController)
	{
		UE_LOG(LogTemp, Error, TEXT("%s: AIController is not a ManicAiController!"), *NodeName);
		return EBTNodeResult::Failed;
	}

	// -- 2) Validate Pawn --
	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn || !IsValid(AIPawn))
	{
		UE_LOG(LogTemp, Error, TEXT("%s: AI Pawn is invalid or null!"), *NodeName);
		return EBTNodeResult::Failed;
	}

	// -- 3) Retrieve/Validate Interact Actor --
	AActor* InteractActor = nullptr;
	if (TargetType == EInteractTargetType::BlackboardActor)
	{
		UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
		if (!BBComp)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: Blackboard is null, cannot retrieve actor!"), *NodeName);
			return EBTNodeResult::Failed;
		}

		UObject* BBObject = BBComp->GetValueAsObject(TargetActorKey.SelectedKeyName);
		InteractActor = Cast<AActor>(BBObject);
		if (!InteractActor || !IsValid(InteractActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: Target actor from Blackboard is null or invalid!"), *NodeName);
			return EBTNodeResult::Failed;
		}
	}
	else if (TargetType == EInteractTargetType::StaticActor)
	{
		AActor* PossibleActor = StaticTargetActor.Get();
		if (!PossibleActor || !IsValid(PossibleActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: StaticTargetActor is null or invalid!"), *NodeName);
			return EBTNodeResult::Failed;
		}
		InteractActor = PossibleActor;
	}

	// -- 4) Perform the generic action (safe call) --
	if (!ActionName.IsNone())
	{
		UE_LOG(LogTemp, Log, TEXT("%s: Calling PerformGenericAction '%s' on controller. Actor = %s"),
			*NodeName,
			*ActionName.ToString(),
			InteractActor ? *InteractActor->GetName() : TEXT("None"));

		// Because PerformGenericAction is BlueprintImplementableEvent, ensure it's called safely.
		MyController->PerformGenericAction(ActionName, InteractActor);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: ActionName is None; skipping PerformGenericAction"), *NodeName);
	}

	// -- 5) If we want to wait, remain in progress --
	if (bWaitAfterInteraction && InteractionDuration > 0.f)
	{
		MyMem->bIsInteracting = true;
		return EBTNodeResult::InProgress;
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("%s: Not waiting, finishing immediately."), *NodeName);
		return EBTNodeResult::Succeeded;
	}
}

void UManicInteract::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FManicInteractMemory* MyMem = reinterpret_cast<FManicInteractMemory*>(NodeMemory);

	// Always re-validate the AI and Pawn in case they got destroyed mid-task
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon || !AICon->GetPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: AI or Pawn destroyed during interaction! Failing Task."), *NodeName);
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	if (!MyMem->bIsInteracting)
	{
		// If we never entered the "wait" state properly, just end now.
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	MyMem->ElapsedTime += DeltaSeconds;
	if (MyMem->ElapsedTime >= InteractionDuration)
	{
		UE_LOG(LogTemp, Log, TEXT("%s: Interaction duration complete (%f seconds), finishing."), *NodeName, InteractionDuration);
		MyMem->bIsInteracting = false;
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
