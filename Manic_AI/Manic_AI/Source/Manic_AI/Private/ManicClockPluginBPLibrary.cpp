#include "ManicClockPluginBPLibrary.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

// A static variable to store total in-game seconds between calls
static double GManicClockTotalSeconds = 0.0;

/** Helper to build a custom string from toggles and the day/h/m/s. */
static FString BuildClockString(
    int32 InDay, int32 InHour, int32 InMinute, int32 InSecond,
    bool bShowDay, bool bShowHour, bool bShowMinute, bool bShowSecond)
{
    FString Result;

    // If showing day:
    if (bShowDay)
    {
        // e.g. "Day 2,"
        Result.Append(FString::Printf(TEXT("Day %d,"), InDay));
        // Add a space if we will show anything else
        if (bShowHour || bShowMinute || bShowSecond)
        {
            Result.Append(TEXT(" "));
        }
    }

    // Build up the time portion
    TArray<FString> TimePieces;

    if (bShowHour)
    {
        TimePieces.Add(FString::Printf(TEXT("%02d"), InHour));
    }
    if (bShowMinute)
    {
        TimePieces.Add(FString::Printf(TEXT("%02d"), InMinute));
    }
    if (bShowSecond)
    {
        TimePieces.Add(FString::Printf(TEXT("%02d"), InSecond));
    }

    // Join them with ":"
    if (TimePieces.Num() > 0)
    {
        const FString TimeString = FString::Join(TimePieces, TEXT(":"));
        Result.Append(TimeString);
    }

    // If the user turned off day/hour/min/sec completely, fallback to a blank
    // or some placeholder if you prefer. We'll just allow it to be empty.
    return Result;
}

//------------------------------------------

void UManicClockPluginBPLibrary::SetInGameClockTime(int32 NewDay, int32 NewHour, int32 NewMinute, int32 NewSecond)
{
    // Convert day/hour/minute/second to total seconds
    const double DaySeconds   = static_cast<double>(NewDay)   * 86400.0;
    const double HourSeconds  = static_cast<double>(NewHour)  * 3600.0;
    const double MinuteSeconds= static_cast<double>(NewMinute)* 60.0;
    const double SecondDouble = static_cast<double>(NewSecond);

    GManicClockTotalSeconds = DaySeconds + HourSeconds + MinuteSeconds + SecondDouble;
}

//------------------------------------------

void UManicClockPluginBPLibrary::TickManicClockAndGet(
    UObject* WorldContextObject,
    float DeltaTime,
    float SpeedMultiplier,
    bool bShowDay,
    bool bShowHour,
    bool bShowMinute,
    bool bShowSecond,
    FManicGameTime& OutClockData,
    FString& OutClockString)
{
    // Advance time
    GManicClockTotalSeconds += (DeltaTime * SpeedMultiplier);

    // Calculate day/hour/minute/second from total
    const double TotalSec = GManicClockTotalSeconds;
    const int32 Days    = static_cast<int32>(FMath::Floor(TotalSec / 86400.0));
    const double DayRemainder   = FMath::Fmod(TotalSec, 86400.0);

    const int32 Hours   = static_cast<int32>(FMath::Floor(DayRemainder / 3600.0));
    const double HourRem= FMath::Fmod(DayRemainder, 3600.0);

    const int32 Minutes = static_cast<int32>(FMath::Floor(HourRem / 60.0));
    const int32 Seconds = static_cast<int32>(FMath::Fmod(HourRem, 60.0));

    // Fill the OutClockData struct
    OutClockData.Day    = Days;
    OutClockData.Hour   = Hours;
    OutClockData.Minute = Minutes;
    OutClockData.Second = Seconds;

    // Build the final string based on toggles
    OutClockString = BuildClockString(Days, Hours, Minutes, Seconds,
                                      bShowDay, bShowHour, bShowMinute, bShowSecond);
}
