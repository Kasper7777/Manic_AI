#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ManicClockPluginBPLibrary.generated.h"

/** Holds Day, Hour, Minute, Second for the in-game clock */
USTRUCT(BlueprintType)
struct FManicGameTime
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ManicClock")
    int32 Day = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ManicClock")
    int32 Hour = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ManicClock")
    int32 Minute = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ManicClock")
    int32 Second = 0;
};

/**
 * Blueprint function library for a manually-ticked clock.
 * Part of the Manic_AI plugin, so we use MANIC_AI_API.
 */
UCLASS()
class MANIC_AI_API UManicClockPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /**
     * Sets the internal clock to the specified day/hour/minute/second.
     * (Useful to jump forward/backward in time or reset the clock.)
     */
    UFUNCTION(BlueprintCallable, Category="ManicClock")
    static void SetInGameClockTime(int32 NewDay, int32 NewHour, int32 NewMinute, int32 NewSecond);

    /**
     * Ticks (advances) the clock by (DeltaTime * SpeedMultiplier), then
     * returns the current day/hour/minute/second and a single string.
     *
     * Call this every frame (or on a timer) to keep the clock advancing.
     * You can toggle whether to include Day, Hour, Minute, and/or Second in the returned string.
     *
     * @param WorldContextObject   Optional world context (only needed if you want world-based logic).
     * @param DeltaTime            Typically the engine’s frame delta time.
     * @param SpeedMultiplier      How fast time progresses. 1.0 = normal, 2.0 = double speed, etc.
     * @param bShowDay            If true, prepend "Day X," to the string.
     * @param bShowHour           If false, skip hours in the string.
     * @param bShowMinute         If false, skip minutes in the string.
     * @param bShowSecond         If false, skip seconds in the string.
     * @param OutClockData        The resulting day/hour/min/sec after ticking.
     * @param OutClockString      A final formatted string (e.g. "Day 2, 12:06:45").
     */
    UFUNCTION(BlueprintCallable, Category="ManicClock", meta=(WorldContext="WorldContextObject"))
    static void TickManicClockAndGet(
        UObject* WorldContextObject,
        float DeltaTime,
        float SpeedMultiplier,
        bool bShowDay,
        bool bShowHour,
        bool bShowMinute,
        bool bShowSecond,
        FManicGameTime& OutClockData,
        FString& OutClockString
    );
};
