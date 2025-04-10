#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FManicTime.h"
#include "ManicTimetableNode.h"
#include "ManicTimetableNodeBPLibrary.generated.h"

/**
 * Utility functions for creating and working with ManicTimetableNode objects.
 */
UCLASS()
class MANIC_AI_API UManicTimetableNodeBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Creates a new ManicTimetableNode object */
	UFUNCTION(BlueprintCallable, Category="Manic AI", meta=(DisplayName="Create Timetable Node", WorldContext="WorldContextObject"))
	static UManicTimetableNode* CreateTimetableNode(UObject* WorldContextObject);

	/** Returns the current active slot from the timetable based on day/hour/min/sec */
	UFUNCTION(BlueprintCallable, Category="Manic AI", meta=(DisplayName="Find Active Timetable Slot"))
	static FManicTime FindActiveTimetableSlot(const TArray<FManicTime>& Timetable, int32 Day, int32 Hour, int32 Minute, int32 Second);
};
