#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FManicTime.h"
#include "ManicTimetableNode.generated.h"

/**
 * A Blueprintable object that stores a list of FManicTime entries.
 * Create this anywhere in Blueprint, fill it, then pass it to your controller or service.
 */
UCLASS(BlueprintType, Blueprintable)
class MANIC_AI_API UManicTimetableNode : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timetable")
	TArray<FManicTime> Timetable;
};
