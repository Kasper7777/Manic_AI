#include "ManicAiController.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "BehaviorTree/BlackboardComponent.h"

void AManicAiController::SetActivityKeyOnBlackboard(
    const FString& Activity,
    const FBlackboardKeySelector& TargetKey,
    const TMap<FString, TSoftObjectPtr<AActor>>& ActivityActorMap,
    int32 TickDelay
)
{
    // 1) If TickDelay is used, only proceed once every TickDelay calls
    if (TickDelay > 0)
    {
        ActivityTickCounter++;
        if (ActivityTickCounter < TickDelay)
        {
            // Skip this update
            return;
        }
        ActivityTickCounter = 0; // Reset after hitting threshold
    }

    // 2) Validate inputs
    if (Activity.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Activity string is empty."), *GetName());
        return;
    }
    if (TargetKey.SelectedKeyName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Target blackboard key is not set."), *GetName());
        return;
    }

    // 3) Grab Blackboard
    UBlackboardComponent* BBComp = GetBlackboardComponent();
    if (!BBComp)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Blackboard component not available."), *GetName());
        return;
    }

    // 4) Find the soft pointer in the map
    if (const TSoftObjectPtr<AActor>* FoundPtr = ActivityActorMap.Find(Activity))
    {
        // 5) Load or resolve the actor from the soft pointer
        AActor* LoadedActor = FoundPtr->LoadSynchronous();
        if (LoadedActor)
        {
            // 6) Assign to blackboard
            BBComp->SetValueAsObject(TargetKey.SelectedKeyName, LoadedActor);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("%s: Could not load actor for '%s'."), *GetName(), *Activity);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: No entry in the map for '%s'."), *GetName(), *Activity);
    }
}
