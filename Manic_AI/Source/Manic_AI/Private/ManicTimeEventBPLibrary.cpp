#include "ManicTimeEventBPLibrary.h"

// Helper to convert day/hour/min/sec to total seconds
static double ToTotalSeconds(const FManicGameTime& Time)
{
	return double(Time.Day)    * 86400.0 +
		   double(Time.Hour)   * 3600.0  +
		   double(Time.Minute) * 60.0    +
		   double(Time.Second);
}

// Helper to convert only hour/min/sec to total seconds (ignoring day)
static double ToDailySeconds(const FManicGameTime& Time)
{
	return double(Time.Hour)   * 3600.0 +
		   double(Time.Minute) * 60.0   +
		   double(Time.Second);
}

EManicTimeEventResult UManicTimeEventBPLibrary::ManicTimeEvent(
	const FManicGameTime& ClockData,
	const FManicGameTime& TargetTime,
	bool bEveryDay,
	bool bOnlyOnce,
	bool& bHasFired
)
{
	// If we've already fired once, do nothing unless user resets bHasFired
	if (bOnlyOnce && bHasFired)
	{
		return EManicTimeEventResult::NotReached;
	}

	double CurrentSec, TargetSec;

	if (bEveryDay)
	{
		// Compare only today's hour/min/sec. 
		// For the current time, mod the total seconds by 86400 to get "time of day."
		double FullCurrentSec = ToTotalSeconds(ClockData);
		double DayRemainder   = fmod(FullCurrentSec, 86400.0);

		CurrentSec = DayRemainder;
		TargetSec  = ToDailySeconds(TargetTime); // ignoring day
	}
	else
	{
		// Compare full day/hour/min/sec
		CurrentSec = ToTotalSeconds(ClockData);
		TargetSec  = ToTotalSeconds(TargetTime);
	}

	// If current time >= target, mark as fired and return "Reached"
	if (CurrentSec >= TargetSec)
	{
		bHasFired = true;
		return EManicTimeEventResult::Reached;
	}

	return EManicTimeEventResult::NotReached;
}
