#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ManicDayOfWeekBPLibrary.generated.h"

/**
 * Blueprint function library that converts an integer day number to a day-of-week string.
 * Mapping: 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday, 7 = Sunday,
 * then repeats (e.g. 8 = Monday, 9 = Tuesday, etc.).
 */
UCLASS()
class MANIC_AI_API UManicDayOfWeekBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Returns the day of the week as a string based on the given day number.
	 *
	 * @param DayNumber The input day number (can be any integer, including numbers in the 1000s).
	 * @return The corresponding day of the week as a string.
	 */
	UFUNCTION(BlueprintCallable, Category="ManicTime")
	static FString GetDayOfWeekString(int32 DayNumber);
};
