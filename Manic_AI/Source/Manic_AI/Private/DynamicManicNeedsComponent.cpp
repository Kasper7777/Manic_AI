#include "DynamicManicNeedsComponent.h"
#include "GameFramework/Actor.h"

UDynamicManicNeedsComponent::UDynamicManicNeedsComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UDynamicManicNeedsComponent::BeginPlay()
{
    Super::BeginPlay();

    // Initialize each need from DefaultValue
    for (FNeedData& Need : Needs)
    {
        Need.CurrentValue    = Need.DefaultValue;
        Need.Accumulator     = 0.f;
        Need.bThresholdFired = false;
    }
}

void UDynamicManicNeedsComponent::TickAllNeeds(float DeltaTime)
{
    for (FNeedData& Need : Needs)
    {
        TickOneNeed(DeltaTime, Need);
    }

    // After updating all needs, broadcast the entire array for HUD or other usage
    OnAllNeedsUpdated.Broadcast(Needs);
}

void UDynamicManicNeedsComponent::TickOneNeed(float DeltaTime, FNeedData& Need)
{
    Need.Accumulator += (DeltaTime * Need.TickRate);
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

    // Threshold crossing
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
