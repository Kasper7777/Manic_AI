#include "DynamicManicNeedsComponent.h"
#include "GameFramework/Actor.h"

UDynamicManicNeedsComponent::UDynamicManicNeedsComponent()
{
    // By default, we don't automatically tick every frame unless the user calls TickAllNeeds.
    PrimaryComponentTick.bCanEverTick = false;
}

void UDynamicManicNeedsComponent::BeginPlay()
{
    Super::BeginPlay();

    // Initialize each need's runtime values
    for (FNeedData& Need : Needs)
    {
        Need.CurrentValue    = Need.DefaultValue;
        Need.Accumulator     = 0.f;
        Need.bThresholdFired = false;
    }
}

void UDynamicManicNeedsComponent::TickAllNeeds(float DeltaTime)
{
    // Update each need
    for (FNeedData& Need : Needs)
    {
        TickOneNeed(DeltaTime, Need);
    }

    // Broadcast the final array for display or other logic
    OnAllNeedsUpdated.Broadcast(Needs);
}

void UDynamicManicNeedsComponent::TickOneNeed(float DeltaTime, FNeedData& Need)
{
    // Accumulate partial frames
    Need.Accumulator += (DeltaTime * Need.TickRate);

    // For each "whole step" in the accumulator, adjust CurrentValue by 1
    if (Need.Accumulator >= 1.f)
    {
        int32 Steps = FMath::FloorToInt(Need.Accumulator);
        Need.Accumulator -= Steps;

        if (Need.bTickUp)
        {
            Need.CurrentValue += Steps;
        }
        else
        {
            Need.CurrentValue -= Steps;
        }
    }

    // 1) If bLockToThreshold = true, clamp the value at the threshold.
    //    If bTickUp = false, the threshold is effectively a lower bound.
    //    If bTickUp = true, the threshold is effectively an upper bound.
    if (Need.bLockToThreshold)
    {
        if (Need.bTickUp && Need.CurrentValue > Need.Threshold)
        {
            Need.CurrentValue = Need.Threshold;
        }
        else if (!Need.bTickUp && Need.CurrentValue < Need.Threshold)
        {
            Need.CurrentValue = Need.Threshold;
        }
    }

    // 2) Check if we've crossed the threshold for the first time
    //    (to fire the threshold-crossed event exactly once).
    //    - If ticking down, "crossing" means CurrentValue <= Threshold.
    //    - If ticking up,   "crossing" means CurrentValue >= Threshold.
    bool bIsPast = Need.bTickUp
        ? (Need.CurrentValue >= Need.Threshold)
        : (Need.CurrentValue <= Need.Threshold);

    if (!Need.bThresholdFired && bIsPast)
    {
        Need.bThresholdFired = true;
        OnAnyNeedThresholdCrossed.Broadcast(Need.NeedName);
    }
    else if (Need.bThresholdFired && !bIsPast)
    {
        Need.bThresholdFired = false;
    }
}

// ---------------------------------------------------
// ADD / REMOVE
// ---------------------------------------------------
void UDynamicManicNeedsComponent::AddNeed(FName NeedName, int32 DefaultVal, int32 InThreshold, bool bUp, float Rate)
{
    FNeedData NewNeed;
    NewNeed.NeedName       = NeedName;
    NewNeed.DefaultValue   = DefaultVal;
    NewNeed.CurrentValue   = DefaultVal;
    NewNeed.Threshold      = InThreshold;
    NewNeed.bTickUp        = bUp;
    NewNeed.TickRate       = Rate;
    NewNeed.Accumulator    = 0.f;
    NewNeed.bThresholdFired= false;

    // bLockToThreshold can be set in the Editor or via code later if you wish

    Needs.Add(NewNeed);
}

void UDynamicManicNeedsComponent::RemoveNeedAtIndex(int32 Index)
{
    if (Needs.IsValidIndex(Index))
    {
        Needs.RemoveAt(Index);
    }
}

// ---------------------------------------------------
// RESET / SET / GET
// ---------------------------------------------------
void UDynamicManicNeedsComponent::ResetNeedByName(FName NeedName)
{
    for (FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            Need.CurrentValue    = Need.DefaultValue;
            Need.Accumulator     = 0.f;
            Need.bThresholdFired = false;
            break;
        }
    }
}

void UDynamicManicNeedsComponent::SetNeedValueByName(FName NeedName, int32 NewValue)
{
    for (FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            Need.CurrentValue    = NewValue;
            Need.Accumulator     = 0.f;
            Need.bThresholdFired = false;
            break;
        }
    }
}

bool UDynamicManicNeedsComponent::GetNeedValueByName(FName NeedName, int32& OutValue) const
{
    for (const FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            OutValue = Need.CurrentValue;
            return true;
        }
    }
    return false;
}

// ---------------------------------------------------
// CHANGE THRESHOLD / RATE / DIRECTION
// ---------------------------------------------------
bool UDynamicManicNeedsComponent::SetNeedThresholdByName(FName NeedName, int32 NewThreshold)
{
    for (FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            Need.Threshold = NewThreshold;
            return true;
        }
    }
    return false;
}

bool UDynamicManicNeedsComponent::SetNeedTickRateByName(FName NeedName, float NewRate)
{
    for (FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            Need.TickRate = FMath::Max(0.f, NewRate);
            return true;
        }
    }
    return false;
}

bool UDynamicManicNeedsComponent::SetNeedDirectionByName(FName NeedName, bool bNewTickUp)
{
    for (FNeedData& Need : Needs)
    {
        if (Need.NeedName == NeedName)
        {
            Need.bTickUp = bNewTickUp;
            return true;
        }
    }
    return false;
}
