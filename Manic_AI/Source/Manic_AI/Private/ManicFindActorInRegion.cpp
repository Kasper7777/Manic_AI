#include "ManicFindActorInRegion.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "BehaviorTree/BehaviorTree.h" // Needed for UBehaviorTree in InitializeFromAsset

UManicFindActorInRegion::UManicFindActorInRegion()
{
	// Set a descriptive name for this task.
	NodeName = "Find Free Actor in Region";

	// Default property values.
	bUseCustomLocation = false;
	CustomSearchLocation = FVector::ZeroVector;
	SearchRadius = 1000.0f;
	ActorClass = AActor::StaticClass(); // Should be overridden in details.
	AvailabilityFlagName = "bIsFree";
	MaxAttempts = 3;
	RetryInterval = 1.0f;
	bEnableDebugDraw = false;
	DebugDrawColor = FColor::Yellow; // Using yellow as default debug colour.

	// Enable ticking for retry logic.
	bNotifyTick = true;
}

void UManicFindActorInRegion::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	// Resolve Blackboard key selectors against the current Blackboard asset.
	UBlackboardData* BBAsset = Asset.BlackboardAsset;
	if (ensure(BBAsset))
	{
		SearchLocationKey.ResolveSelectedKey(*BBAsset);
		FoundActorKey.ResolveSelectedKey(*BBAsset);
		FoundActorLocationKey.ResolveSelectedKey(*BBAsset);
	}
}

EBTNodeResult::Type UManicFindActorInRegion::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Log, TEXT("ManicFindActorInRegion: Starting ExecuteTask."));

	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicFindActorInRegion: AIController is null."));
		return EBTNodeResult::Failed;
	}
	APawn* AIPawn = AIController->GetPawn();
	if (!AIPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicFindActorInRegion: AI pawn is null."));
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicFindActorInRegion: Blackboard component is null."));
		return EBTNodeResult::Failed;
	}

	// Determine the search centre.
	FVector SearchCenter = FVector::ZeroVector;
	if (bUseCustomLocation)
	{
		SearchCenter = CustomSearchLocation;
	}
	else
	{
		if (!SearchLocationKey.SelectedKeyName.IsNone())
		{
			SearchCenter = BlackboardComp->GetValueAsVector(SearchLocationKey.SelectedKeyName);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ManicFindActorInRegion: Search location key not set. Using AI pawn location as fallback."));
			SearchCenter = AIPawn->GetActorLocation();
		}
	}

	// Validate ActorClass.
	if (!ActorClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicFindActorInRegion: No ActorClass specified."));
		return EBTNodeResult::Failed;
	}

	// First search attempt.
	AActor* ChosenActor = FindActorInRegionAttempt(OwnerComp);
	if (ChosenActor)
	{
		// Save the found actor (and its location) to Blackboard.
		BlackboardComp->SetValueAsObject(FoundActorKey.SelectedKeyName, ChosenActor);
		if (!FoundActorLocationKey.SelectedKeyName.IsNone())
		{
			BlackboardComp->SetValueAsVector(FoundActorLocationKey.SelectedKeyName, ChosenActor->GetActorLocation());
		}
		UE_LOG(LogTemp, Log, TEXT("ManicFindActorInRegion: Found actor %s on initial attempt."), *ChosenActor->GetName());

		// Debug drawing.
		if (bEnableDebugDraw)
		{
			UWorld* World = AIController->GetWorld();
			if (World)
			{
				DrawDebugSphere(World, SearchCenter, SearchRadius, 16, DebugDrawColor, false, 3.0f);
				DrawDebugSphere(World, ChosenActor->GetActorLocation(), 100.0f, 12, DebugDrawColor, false, 5.0f);
			}
		}
		return EBTNodeResult::Succeeded;
	}

	UE_LOG(LogTemp, Warning, TEXT("ManicFindActorInRegion: No suitable actor found on initial attempt."));

	// If no retries are permitted, fail.
	if (MaxAttempts <= 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicFindActorInRegion: Failing - no retries permitted."));
		return EBTNodeResult::Failed;
	}

	// Prepare for retries.
	FManicFindActorInRegionMemory* MyMemory = reinterpret_cast<FManicFindActorInRegionMemory*>(NodeMemory);
	if (MyMemory)
	{
		MyMemory->AttemptsMade = 1;
		MyMemory->LastAttemptTime = FPlatformTime::Seconds();
	}
	return EBTNodeResult::InProgress;
}

void UManicFindActorInRegion::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FManicFindActorInRegionMemory* MyMemory = reinterpret_cast<FManicFindActorInRegionMemory*>(NodeMemory);
	if (!MyMemory)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// Check if we should attempt another search.
	double CurrentTime = FPlatformTime::Seconds();
	if (RetryInterval > 0.f && (CurrentTime - MyMemory->LastAttemptTime < RetryInterval))
	{
		return;
	}

	++MyMemory->AttemptsMade;
	MyMemory->LastAttemptTime = CurrentTime;
	UE_LOG(LogTemp, Log, TEXT("ManicFindActorInRegion: Retry attempt %d of %d."), MyMemory->AttemptsMade, MaxAttempts);

	AActor* ChosenActor = FindActorInRegionAttempt(OwnerComp);
	if (ChosenActor)
	{
		UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
		if (BlackboardComp)
		{
			BlackboardComp->SetValueAsObject(FoundActorKey.SelectedKeyName, ChosenActor);
			if (!FoundActorLocationKey.SelectedKeyName.IsNone())
			{
				BlackboardComp->SetValueAsVector(FoundActorLocationKey.SelectedKeyName, ChosenActor->GetActorLocation());
			}
		}
		UE_LOG(LogTemp, Log, TEXT("ManicFindActorInRegion: Found actor %s on attempt %d."), *ChosenActor->GetName(), MyMemory->AttemptsMade);

		// Debug drawing.
		AAIController* AIController = OwnerComp.GetAIOwner();
		if (bEnableDebugDraw && AIController)
		{
			UWorld* World = AIController->GetWorld();
			if (World)
			{
				FVector SearchCenter;
				if (bUseCustomLocation)
				{
					SearchCenter = CustomSearchLocation;
				}
				else
				{
					SearchCenter = BlackboardComp ? BlackboardComp->GetValueAsVector(SearchLocationKey.SelectedKeyName) : FVector::ZeroVector;
				}
				DrawDebugSphere(World, SearchCenter, SearchRadius, 16, DebugDrawColor, false, 3.0f);
				DrawDebugSphere(World, ChosenActor->GetActorLocation(), 100.0f, 12, DebugDrawColor, false, 5.0f);
			}
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	if (MyMemory->AttemptsMade >= MaxAttempts)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicFindActorInRegion: No actor found after %d attempts. Failing task."), MyMemory->AttemptsMade);
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
	// Otherwise, remain in progress.
}

AActor* UManicFindActorInRegion::FindActorInRegionAttempt(UBehaviorTreeComponent& OwnerComp)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		return nullptr;
	}
	APawn* AIPawn = AIController->GetPawn();
	UWorld* World = AIController->GetWorld();
	if (!World)
	{
		return nullptr;
	}

	// Determine the search centre.
	FVector SearchCenter;
	if (bUseCustomLocation)
	{
		SearchCenter = CustomSearchLocation;
	}
	else
	{
		SearchCenter = OwnerComp.GetBlackboardComponent() 
			? OwnerComp.GetBlackboardComponent()->GetValueAsVector(SearchLocationKey.SelectedKeyName)
			: FVector::ZeroVector;
	}

	// Get all actors of the specified class.
	TArray<AActor*> Candidates;
	UGameplayStatics::GetAllActorsOfClass(World, ActorClass, Candidates);

	// Filter candidates: within SearchRadius and marked as free.
	TArray<AActor*> ValidCandidates;
	ValidCandidates.Reserve(Candidates.Num());
	const float RadiusSq = SearchRadius * SearchRadius;
	for (AActor* Candidate : Candidates)
	{
		if (!Candidate) continue;
		if (FVector::DistSquared(Candidate->GetActorLocation(), SearchCenter) > RadiusSq)
		{
			continue;
		}
		if (Candidate == AIPawn)
		{
			continue;
		}

		bool bIsFree = false;
		if (!AvailabilityFlagName.IsNone())
		{
			UClass* CandidateClass = Candidate->GetClass();
			FProperty* Prop = CandidateClass->FindPropertyByName(AvailabilityFlagName);
			if (Prop && Prop->IsA(FBoolProperty::StaticClass()))
			{
				FBoolProperty* BoolProp = CastField<FBoolProperty>(Prop);
				if (BoolProp)
				{
					bIsFree = BoolProp->GetPropertyValue_InContainer(Candidate);
				}
			}
			else
			{
				bIsFree = false;
			}
		}
		if (!bIsFree)
		{
			continue;
		}
		if (!IsValid(Candidate))
		{
			continue;
		}
		ValidCandidates.Add(Candidate);
	}

	if (ValidCandidates.Num() == 0)
	{
		return nullptr;
	}

	// Select one at random.
	int32 Index = FMath::RandRange(0, ValidCandidates.Num() - 1);
	AActor* SelectedActor = ValidCandidates[Index];

	// Double-check validity.
	if (!SelectedActor || !IsValid(SelectedActor))
	{
		ValidCandidates.RemoveAt(Index);
		for (AActor* Candidate : ValidCandidates)
		{
			if (IsValid(Candidate))
			{
				SelectedActor = Candidate;
				break;
			}
		}
	}
	return (SelectedActor && IsValid(SelectedActor)) ? SelectedActor : nullptr;
}
