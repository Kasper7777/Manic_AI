// ManicServiceSetTimeKey.cpp

#include "ManicServiceSetTimeKey.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "ManicAiController.h" // Needed so we can cast to AManicAiController
#include "GameFramework/GameStateBase.h"
#include "Engine/World.h"
#include "UObject/UnrealType.h"

UManicServiceSetTimeKey::UManicServiceSetTimeKey()
{
    NodeName = "Set TimeSlot Key (Day, Hour, Minute, Second)";
    bNotifyBecomeRelevant = true;
    bNotifyTick = true;

    // Default to using the node’s own Timetable unless changed in the editor
    TimetableSource = EManicTimetableSource::UseNode;
}

void UManicServiceSetTimeKey::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
    if (!BBComp)
    {
        return;
    }

    // 1) Get current time
    int32 CurrentDay, CurrentHour, CurrentMinute, CurrentSecond;
    GetCurrentTime(CurrentDay, CurrentHour, CurrentMinute, CurrentSecond);

    // 2) Determine which timetable to use
    FString CurrentSlotName;
    AAIController* BaseAICon = OwnerComp.GetAIOwner();
    if (!BaseAICon)
    {
        return;
    }

    // If user selected "Use AI Controller Timetable"
    if (TimetableSource == EManicTimetableSource::UseController)
    {
        AManicAiController* MyManicCon = Cast<AManicAiController>(BaseAICon);
        if (MyManicCon && MyManicCon->ControllerTimetable.Num() > 0)
        {
            // Use the AI Controller's timetable array
            CurrentSlotName = FindActiveSlotNameInArray(
                MyManicCon->ControllerTimetable,
                CurrentDay, CurrentHour, CurrentMinute, CurrentSecond
            );
        }
        else
        {
            // Fallback to the node's timetable if the controller is not our class or has no entries
            CurrentSlotName = FindActiveSlotName(CurrentDay, CurrentHour, CurrentMinute, CurrentSecond);
        }
    }
    else
    {
        // Default: use this service node's own Timetable
        CurrentSlotName = FindActiveSlotName(CurrentDay, CurrentHour, CurrentMinute, CurrentSecond);
    }

    // 3) Write the slot name to the Blackboard
    BBComp->SetValueAsString(ActivityKey.SelectedKeyName, CurrentSlotName);

    // 4) Build a derived time string, e.g. "Time 09:49:55 Day 0".
    FString DerivedTimeString = FString::Printf(TEXT("Time %02d:%02d:%02d Day %d"),
        CurrentHour, CurrentMinute, CurrentSecond, CurrentDay);

    BBComp->SetValueAsString(TimeKey.SelectedKeyName, DerivedTimeString);
}

void UManicServiceSetTimeKey::GetCurrentTime(int32& OutDay, int32& OutHour, int32& OutMinute, int32& OutSecond) const
{
    // Default fallback
    OutDay    = 0;
    OutHour   = 9;
    OutMinute = 30;
    OutSecond = 0;

    if (!SelectedGameStateClass || DayPropertyName.IsNone() ||
        HourPropertyName.IsNone() || MinutePropertyName.IsNone() || SecondPropertyName.IsNone())
    {
        return; // Stick with fallback
    }

    UWorld* World = GetWorld();
    if (!World) return;

    AGameStateBase* GS = World->GetGameState();
    if (!GS || !GS->IsA(SelectedGameStateClass))
    {
        return; // Stick with fallback
    }

    // Use reflection to read day/hour/minute/second from the GameState
    FProperty* DayProp  = SelectedGameStateClass->FindPropertyByName(DayPropertyName);
    FProperty* HourProp = SelectedGameStateClass->FindPropertyByName(HourPropertyName);
    FProperty* MinProp  = SelectedGameStateClass->FindPropertyByName(MinutePropertyName);
    FProperty* SecProp  = SelectedGameStateClass->FindPropertyByName(SecondPropertyName);

    if (!DayProp || !HourProp || !MinProp || !SecProp)
    {
        return;
    }

    FIntProperty* DayInt  = CastField<FIntProperty>(DayProp);
    FIntProperty* HourInt = CastField<FIntProperty>(HourProp);
    FIntProperty* MinInt  = CastField<FIntProperty>(MinProp);
    FIntProperty* SecInt  = CastField<FIntProperty>(SecProp);

    if (!DayInt || !HourInt || !MinInt || !SecInt)
    {
        return;
    }

    void* Container = (void*)GS;
    OutDay    = DayInt->GetPropertyValue_InContainer(Container);
    OutHour   = HourInt->GetPropertyValue_InContainer(Container);
    OutMinute = MinInt->GetPropertyValue_InContainer(Container);
    OutSecond = SecInt->GetPropertyValue_InContainer(Container);
}

// Original method using this node's internal 'Timetable' array
FString UManicServiceSetTimeKey::FindActiveSlotName(int32 Day, int32 Hour, int32 Minute, int32 Second) const
{
    // Convert now to total seconds
    int32 NowSec = Hour * 3600 + Minute * 60 + Second;

    UE_LOG(LogTemp, Log, TEXT("FindActiveSlotName: Day=%d Time=%02d:%02d:%02d => %d seconds"),
        Day, Hour, Minute, Second, NowSec);

    int32 BestStartSec = -1;
    TArray<int32> Ties;

    for (int32 i = 0; i < Timetable.Num(); i++)
    {
        const FManicTime& Slot = Timetable[i];

        if (Slot.DayOfWeek != -1 && Slot.DayOfWeek != Day)
        {
            continue;
        }

        int32 SlotSec = Slot.StartHour * 3600 + Slot.StartMinute * 60 + Slot.StartSecond;
        if (SlotSec <= NowSec)
        {
            if (SlotSec > BestStartSec)
            {
                BestStartSec = SlotSec;
                Ties.Reset();
                Ties.Add(i);
            }
            else if (SlotSec == BestStartSec)
            {
                Ties.Add(i);
            }
        }
    }

    if (BestStartSec < 0)
    {
        return TEXT("Unknown");
    }

    int32 ChosenIndex = 0;
    if (Ties.Num() > 1)
    {
        ChosenIndex = FMath::RandRange(0, Ties.Num() - 1);
    }
    int32 FinalIndex = Ties[ChosenIndex];

    UE_LOG(LogTemp, Log, TEXT("Choose slot index=%d among Ties=%d, StartSec=%d => %s"),
        FinalIndex, Ties.Num(), BestStartSec, *Timetable[FinalIndex].ActivityName);

    return Timetable[FinalIndex].ActivityName;
}

// New helper for reading from a passed-in TArray<FManicTime>
FString UManicServiceSetTimeKey::FindActiveSlotNameInArray(
    const TArray<FManicTime>& Slots, int32 Day, int32 Hour, int32 Minute, int32 Second) const
{
    // This is the same logic as FindActiveSlotName, but uses 'Slots' instead of 'Timetable'
    int32 NowSec = Hour * 3600 + Minute * 60 + Second;

    UE_LOG(LogTemp, Log, TEXT("FindActiveSlotNameInArray: Day=%d Time=%02d:%02d:%02d => %d seconds"),
        Day, Hour, Minute, Second, NowSec);

    int32 BestStartSec = -1;
    TArray<int32> Ties;

    for (int32 i = 0; i < Slots.Num(); i++)
    {
        const FManicTime& Slot = Slots[i];

        if (Slot.DayOfWeek != -1 && Slot.DayOfWeek != Day)
        {
            continue;
        }

        int32 SlotSec = Slot.StartHour * 3600 + Slot.StartMinute * 60 + Slot.StartSecond;
        if (SlotSec <= NowSec)
        {
            if (SlotSec > BestStartSec)
            {
                BestStartSec = SlotSec;
                Ties.Reset();
                Ties.Add(i);
            }
            else if (SlotSec == BestStartSec)
            {
                Ties.Add(i);
            }
        }
    }

    if (BestStartSec < 0)
    {
        return TEXT("Unknown");
    }

    int32 ChosenIndex = 0;
    if (Ties.Num() > 1)
    {
        ChosenIndex = FMath::RandRange(0, Ties.Num() - 1);
    }
    int32 FinalIndex = Ties[ChosenIndex];

    UE_LOG(LogTemp, Log, TEXT("FindActiveSlotNameInArray: Choose slot index=%d among Ties=%d, StartSec=%d => %s"),
        FinalIndex, Ties.Num(), BestStartSec, *Slots[FinalIndex].ActivityName);

    return Slots[FinalIndex].ActivityName;
}
