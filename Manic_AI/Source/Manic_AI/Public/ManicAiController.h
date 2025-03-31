#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ManicAiController.generated.h"

/**
 * Custom AI Controller that provides a generic interaction function.
 * You will override PerformGenericAction in Blueprint to define your interaction logic.
 */
UCLASS()
class MANIC_AI_API AManicAiController : public AAIController
{
	GENERATED_BODY()

public:
	/**
	 * Called by the ManicInteract Behaviour Tree task to perform an interaction.
	 * @param ActionName - Name of the action (e.g. "Interact", "Sit", etc.).
	 * @param OptionalActor - The actor to interact with (can be nullptr).
	 */
	UFUNCTION(BlueprintImplementableEvent, Category="AI|Interact")
	void PerformGenericAction(FName ActionName, AActor* OptionalActor);
};
