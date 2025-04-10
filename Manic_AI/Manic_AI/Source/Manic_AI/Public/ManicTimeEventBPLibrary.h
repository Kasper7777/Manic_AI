#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ManicClockPluginBPLibrary.h" // for FManicGameTime
#include "ManicTimeEventBPLibrary.generated.h"

/**
 * Enum used to expand execution pins in Blueprint: "Not Reached" and "Reached".
 */
UENUM(BlueprintType)
enum class EManicTimeEventResult : uint8
{
	NotReached UMETA(DisplayName="Not Reached"),
	Reached    UMETA(DisplayName="Reached")
};

/**
 * ManicTimeEvent node that checks if the current clock time is >= a target time.
 * - If bEveryDay is true, it ignores the Day in both current and target times (fires every day at Hour:Minute:Second).
 * - Otherwise, it compares full Day/Hour/Minute/Second.
 * - If bOnlyOnce is true, it won't fire again unless you reset bHasFired.
 */
UCLASS()
class MANIC_AI_API UManicTimeEventBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Compares ClockData to TargetTime. If bEveryDay is checked, only Hour/Minute/Second matter,
	 * and it fires daily. If bEveryDay is false, Day must also match or be exceeded.
	 * Returns "Reached" once time is >= the target, otherwise "Not Reached."
	 *
	 * @param ClockData   Current day/hour/min/sec from your clock.
	 * @param TargetTime  The day/hour/min/sec to trigger on (Day is ignored if bEveryDay is true).
	 * @param bEveryDay   If true, ignore the Day portion and trigger daily at the specified Hour/Min/Sec.
	 * @param bOnlyOnce   If true, once it fires, it won't fire again until bHasFired is reset.
	 * @param bHasFired   Tracks if the event has already fired. Store in the same BP.
	 */
	UFUNCTION(BlueprintCallable, Category="ManicClock",
		meta=(DisplayName="Manic Time Event", ExpandEnumAsExecs="ReturnValue"))
	static EManicTimeEventResult ManicTimeEvent(
		const FManicGameTime& ClockData,
		const FManicGameTime& TargetTime,
		bool bEveryDay,
		bool bOnlyOnce,
		UPARAM(ref) bool& bHasFired
	);
};
