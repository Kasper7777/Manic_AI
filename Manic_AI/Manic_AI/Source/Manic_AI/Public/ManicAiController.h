#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FManicTime.h"           // For FManicTime struct
#include "Engine/EngineTypes.h"   // For TSoftObjectPtr
#include "BehaviorTree/BehaviorTreeTypes.h" // For FBlackboardKeySelector
#include "ManicAiController.generated.h"

/**
 * A simplified AI Controller that:
 *  - Keeps PerformGenericAction (original plugin event)
 *  - Keeps ControllerTimetable
 *  - Has a TMap of (String -> SoftActor)
 *  - Provides *only* one Blueprint function to set the Blackboard key from that map
 */
UCLASS()
class MANIC_AI_API AManicAiController : public AAIController
{
    GENERATED_BODY()

public:

    /** Original plugin event for interactions (unchanged) */
    UFUNCTION(BlueprintImplementableEvent, Category="AI|Interact")
    void PerformGenericAction(FName ActionName, AActor* OptionalActor);

    /** Original optional Timetable array (unchanged) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
    TArray<FManicTime> ControllerTimetable;

    /**
     * A TMap storing (ActivityString -> SoftActorReference).
     * e.g. "History" -> TSoftObjectPtr of a chair
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Manic AI")
    TMap<FString, TSoftObjectPtr<AActor>> ActivityMap;

    /**
     * The single Blueprint function you want:
     * Looks up an actor for the given activity string in ActivityActorMap,
     * attempts to load it, and sets the Blackboard key. 
     * 
     * Optionally uses TickDelay to skip setting each call (only once every N calls).
     *
     * @param Activity          Name of the activity to find (e.g. "History").
     * @param TargetKey         Blackboard key to set with the found actor.
     * @param ActivityActorMap  Map of (String -> SoftObjectPtr<AActor>) to search.
     * @param TickDelay         If > 0, wait that many calls before updating again.
     */
    UFUNCTION(BlueprintCallable, Category="ManicAi")
    void SetActivityKeyOnBlackboard(
        const FString& Activity,
        const FBlackboardKeySelector& TargetKey,
        const TMap<FString, TSoftObjectPtr<AActor>>& ActivityActorMap,
        int32 TickDelay = 0
    );

protected:

    /** Internal counter used to implement the optional TickDelay. */
    int32 ActivityTickCounter = 0;
};
