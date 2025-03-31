#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicManicNeedsComponent.generated.h"

// Represents one “need” (Name, DefaultValue, Threshold, direction, rate, etc.)
USTRUCT(BlueprintType)
struct FNeedData
{
    GENERATED_BODY()

public:
    // Unique identifier or display name for the need
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Need")
    FName NeedName = NAME_None;

    // Basic config
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Need")
    int32 DefaultValue = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Need")
    int32 Threshold = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Need")
    bool bTickUp = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Need", meta=(ClampMin="0.0"))
    float TickRate = 1.f;

    // Runtime fields (not typically edited in the Details panel at design time)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Need")
    int32 CurrentValue = 0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Need")
    float Accumulator = 0.f;

    bool bThresholdFired = false;
};

// Broadcast whenever ANY need crosses its threshold
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyNeedThreshold, FName, CrossedNeedName);

/**
 * If you want the entire array of needs each tick, we define
 * a multicast delegate passing TArray<FNeedData>.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllNeedsUpdated, const TArray<FNeedData>&, UpdatedNeeds);

/**
 * A flexible actor component that manages an array of FNeedData.
 *
 * - Call TickAllNeeds(DeltaTime) each frame (e.g. from Event Tick in your Blueprint).
 * - Add or remove needs at runtime (AddNeed, RemoveNeedAtIndex).
 * - Reset or set the current values by name.
 * - Access or change thresholds, rates, etc. at runtime.
 * - Broadcasts OnAnyNeedThresholdCrossed each time a threshold is hit.
 * - **Also** broadcasts OnAllNeedsUpdated every frame, passing the entire array
 *   so you can easily display current values in a HUD.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MANIC_AI_API UDynamicManicNeedsComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // 1) The array of needs
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Manic|DynamicNeeds")
    TArray<FNeedData> Needs;

    // 2) Broadcast when ANY need crosses threshold
    UPROPERTY(BlueprintAssignable, Category="Manic|Events")
    FOnAnyNeedThreshold OnAnyNeedThresholdCrossed;

    // 3) Broadcast the entire array of needs every time you call TickAllNeeds
    UPROPERTY(BlueprintAssignable, Category="Manic|Events")
    FOnAllNeedsUpdated OnAllNeedsUpdated;

public:
    UDynamicManicNeedsComponent();

    virtual void BeginPlay() override;

    /**
     * Called each frame from Event Tick.  
     * e.g.:  
     *   Event Tick (DeltaTime) -> TickAllNeeds(DeltaTime)
     */
    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    void TickAllNeeds(float DeltaTime);

    // Basic array management
    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    void AddNeed(FName NeedName, int32 DefaultVal, int32 InThreshold, bool bUp, float Rate);

    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    void RemoveNeedAtIndex(int32 Index);

    // Reset / Set / Get
    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    void ResetNeedByName(FName NeedName);

    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    void SetNeedValueByName(FName NeedName, int32 NewValue);

    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    bool GetNeedValueByName(FName NeedName, int32& OutValue) const;

    // Change threshold / rate / direction at runtime
    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    bool SetNeedThresholdByName(FName NeedName, int32 NewThreshold);

    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    bool SetNeedTickRateByName(FName NeedName, float NewRate);

    UFUNCTION(BlueprintCallable, Category="Manic|Dynamic")
    bool SetNeedDirectionByName(FName NeedName, bool bNewTickUp);

private:
    void TickOneNeed(float DeltaTime, FNeedData& Need);
};
