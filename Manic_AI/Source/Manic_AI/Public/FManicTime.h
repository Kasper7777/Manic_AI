// FManicTime.h
#pragma once

#include "CoreMinimal.h"
#include "FManicTime.generated.h"

/**
 * A struct that defines a single time slot for the timetable, including day-of-week.
 *   - DayOfWeek = -1 means "any day"
 *   - StartHour, StartMinute, StartSecond define when the activity becomes active
 *   - ActivityName is the name of the slot
 */
USTRUCT(BlueprintType)
struct FManicTime
{
	GENERATED_BODY()

public:
	// -1 = any day, 0 = Sunday, 1 = Monday, etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	int32 DayOfWeek;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	int32 StartHour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	int32 StartMinute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	int32 StartSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	FString ActivityName;
};
