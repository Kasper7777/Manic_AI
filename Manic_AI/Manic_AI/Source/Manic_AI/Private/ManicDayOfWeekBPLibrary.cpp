#include "ManicDayOfWeekBPLibrary.h"

FString UManicDayOfWeekBPLibrary::GetDayOfWeekString(int32 DayNumber)
{
	// Normalize the day number using modulo 7.
	// Our mapping is:
	// 1 mod 7 = 1 -> Monday, 2 -> Tuesday, 3 -> Wednesday, 4 -> Thursday,
	// 5 -> Friday, 6 -> Saturday, and 0 -> Sunday.
	int32 Remainder = DayNumber % 7;
	if (Remainder < 0)
	{
		Remainder = (Remainder + 7) % 7;
	}

	switch (Remainder)
	{
	case 1: return FString("Monday");
	case 2: return FString("Tuesday");
	case 3: return FString("Wednesday");
	case 4: return FString("Thursday");
	case 5: return FString("Friday");
	case 6: return FString("Saturday");
	case 0: return FString("Sunday");
	default: return FString("Unknown");
	}
}
