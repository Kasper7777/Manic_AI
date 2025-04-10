#include "ManicTimetableNodeBPLibrary.h"

UManicTimetableNode* UManicTimetableNodeBPLibrary::CreateTimetableNode(UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateTimetableNode: Missing WorldContextObject"));
		return nullptr;
	}

	return NewObject<UManicTimetableNode>(WorldContextObject);
}

FManicTime UManicTimetableNodeBPLibrary::FindActiveTimetableSlot(const TArray<FManicTime>& Timetable, int32 Day, int32 Hour, int32 Minute, int32 Second)
{
	FManicTime Result;
	int32 NowSec = Hour * 3600 + Minute * 60 + Second;

	int32 BestStartSec = -1;
	TArray<int32> Ties;

	for (int32 i = 0; i < Timetable.Num(); ++i)
	{
		const FManicTime& Slot = Timetable[i];

		if (Slot.DayOfWeek != -1 && Slot.DayOfWeek != Day)
		{
			continue;
		}

		int32 SlotSec = Slot.StartHour * 3600 + Slot.StartMinute * 60 + Slot.StartSecond;
		if (SlotSec <= NowSec)
		{
			if (SlotSec > BestStartSec)
			{
				BestStartSec = SlotSec;
				Ties.Reset();
				Ties.Add(i);
			}
			else if (SlotSec == BestStartSec)
			{
				Ties.Add(i);
			}
		}
	}

	if (BestStartSec >= 0 && Ties.Num() > 0)
	{
		int32 Index = Ties.Num() == 1 ? Ties[0] : FMath::RandRange(0, Ties.Num() - 1);
		Result = Timetable[Index];
	}

	return Result;
}
