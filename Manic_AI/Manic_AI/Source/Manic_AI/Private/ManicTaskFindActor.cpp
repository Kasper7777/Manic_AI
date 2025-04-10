// ManicTaskFindActor.cpp - Corrected version with fixes and additional debugging
#include "ManicTaskFindActor.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

UManicTaskFindActor::UManicTaskFindActor()
{
    NodeName = "Find Closest Actor";
}

EBTNodeResult::Type UManicTaskFindActor::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: ExecuteTask started."));

    // Step 1: Get the AI Controller that owns this behavior tree
    AAIController* AICon = OwnerComp.GetAIOwner();
    if (!AICon)
    {
        UE_LOG(LogTemp, Error, TEXT("ManicTaskFindActor: AIController is NULL."));
        return EBTNodeResult::Failed;
    }

    // Step 2: Get the Blackboard Component
    UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    if (!BlackboardComp)
    {
        UE_LOG(LogTemp, Error, TEXT("ManicTaskFindActor: Blackboard Component is NULL."));
        return EBTNodeResult::Failed;
    }

    // Step 3: Retrieve the target actor class from the Blackboard
    UClass* TargetClass = BlackboardComp->GetValueAsClass(TargetClassKey.SelectedKeyName);
    if (!TargetClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindActor: Blackboard key '%s' is not set or not a valid class."),
            *TargetClassKey.SelectedKeyName.ToString());

        // Debugging: List all keys in the Blackboard asset to verify the key exists
        if (BlackboardComp->GetBlackboardAsset())
        {
            UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindActor: Available Blackboard keys:"));
            const UBlackboardData* BlackboardData = BlackboardComp->GetBlackboardAsset();
            for (const FBlackboardEntry& Entry : BlackboardData->Keys)
            {
                UE_LOG(LogTemp, Warning, TEXT("  - %s"), *Entry.EntryName.ToString());
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindActor: Blackboard asset is NULL or invalid."));
        }

        return EBTNodeResult::Failed;
    }

    UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: Retrieved TargetClass '%s' from Blackboard."), *TargetClass->GetName());

    // Step 4: Get the World context from the AI controller
    UWorld* World = AICon->GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("ManicTaskFindActor: World context is NULL."));
        return EBTNodeResult::Failed;
    }

    // Step 5: Find all actors of the specified class in the world
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(World, TargetClass, FoundActors);

    if (FoundActors.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindActor: No actors of class %s found in the world."), *TargetClass->GetName());
        return EBTNodeResult::Failed;
    }

    // Print out ALL found actors' locations
    UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: Printing all found actors' locations:"));
    for (AActor* Actor : FoundActors)
    {
        if (Actor)
        {
            UE_LOG(LogTemp, Log, TEXT("   Actor: %s, Location: %s"),
                   *Actor->GetName(), *Actor->GetActorLocation().ToString());
        }
    }

    // Step 6: Identify the AI's pawn and its location
    APawn* AIPawn = AICon->GetPawn();
    if (!AIPawn)
    {
        UE_LOG(LogTemp, Error, TEXT("ManicTaskFindActor: AI Pawn is NULL."));
        return EBTNodeResult::Failed;
    }
    FVector PawnLocation = AIPawn->GetActorLocation();

    // Step 7: Iterate through found actors to find the closest one (excluding the AI's own pawn)
    AActor* ClosestActor = nullptr;
    float MinDistanceSq = TNumericLimits<float>::Max();
    for (AActor* Actor : FoundActors)
    {
        if (!Actor) continue;
        if (Actor == AIPawn)
        {
            UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: Skipping actor '%s' (it's the AI's own pawn)."), *Actor->GetName());
            continue;
        }

        float DistSq = FVector::DistSquared(PawnLocation, Actor->GetActorLocation());
        if (DistSq < MinDistanceSq)
        {
            MinDistanceSq = DistSq;
            ClosestActor = Actor;
        }
    }

    if (!ClosestActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindActor: No valid target actor found (candidates were invalid or none remained)."));
        return EBTNodeResult::Failed;
    }

    // Step 8: Store the closest actor and (optionally) its location in the Blackboard
    BlackboardComp->SetValueAsObject(TargetActorKey.SelectedKeyName, ClosestActor);
    UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: Closest actor '%s' set in Blackboard key %s."),
           *ClosestActor->GetName(), *TargetActorKey.SelectedKeyName.ToString());

    if (!TargetLocationKey.SelectedKeyName.IsNone())
    {
        BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, ClosestActor->GetActorLocation());
        UE_LOG(LogTemp, Log, TEXT("ManicTaskFindActor: Location %s stored in Blackboard key %s."),
               *ClosestActor->GetActorLocation().ToString(), *TargetLocationKey.SelectedKeyName.ToString());
    }

    return EBTNodeResult::Succeeded;
}
