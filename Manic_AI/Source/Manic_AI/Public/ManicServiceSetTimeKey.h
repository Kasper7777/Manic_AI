// ManicServiceSetTimeKey.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FManicTime.h"
#include "ManicServiceSetTimeKey.generated.h"

UCLASS()
class MANIC_AI_API UManicServiceSetTimeKey : public UBTService
{
	GENERATED_BODY()

public:
	UManicServiceSetTimeKey();

protected:
	// Blackboard key for the timetable outcome, e.g. "Where2Go"
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector ActivityKey;

	// Blackboard key for the derived time string, e.g. "Time"
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector TimeKey;

	// A list of time slots. Only the Start* fields are used now; End times are ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	TArray<FManicTime> Timetable;

	// The custom GameState class that holds the day/hour/minute/second (optional).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="TimeSource")
	TSubclassOf<AGameStateBase> SelectedGameStateClass;

	// Property names for day/hour/minute/second in that GameState.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="TimeSource")
	FName DayPropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="TimeSource")
	FName HourPropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="TimeSource")
	FName MinutePropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="TimeSource")
	FName SecondPropertyName;

	// Called every tick at the service interval to update the Blackboard keys.
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	// Retrieve the current day/hour/minute/second from the user’s GameState or fallback defaults.
	void GetCurrentTime(int32& OutDay, int32& OutHour, int32& OutMinute, int32& OutSecond) const;

	// Given day/hour/minute/second, find the "latest" slot whose start <= now. If none, return "Unknown."
	FString FindActiveSlotName(int32 Day, int32 Hour, int32 Minute, int32 Second) const;
};
