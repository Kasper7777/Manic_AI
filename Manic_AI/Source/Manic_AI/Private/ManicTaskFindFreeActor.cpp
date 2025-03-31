#include "ManicTaskFindFreeActor.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

UManicTaskFindFreeActor::UManicTaskFindFreeActor()
{
	NodeName = "Find Closest Free Actor";
	MinSelectionDelay = 0.5f;
	MaxSelectionDelay = 2.0f;
	AvoidanceRadius = 500.f;
	bNotifyTick = true;

	// Default to writing both, or whichever you prefer
	WriteMode = EFreeActorWriteMode::ActorAndLocation;
}

bool UManicTaskFindFreeActor::IsCandidateAlreadyTargeted(AActor* Candidate, UWorld* World, APawn* MyPawn) const
{
	TArray<AActor*> AllNPCs;
	UGameplayStatics::GetAllActorsOfClass(World, MyPawn->GetClass(), AllNPCs);
	for (AActor* NPCActor : AllNPCs)
	{
		if (NPCActor == MyPawn)
			continue;

		AAIController* OtherAI = Cast<AAIController>(NPCActor->GetInstigatorController());
		if (OtherAI)
		{
			UBlackboardComponent* OtherBB = OtherAI->GetBlackboardComponent();
			if (OtherBB)
			{
				// If their blackboard has the same actor set, skip
				AActor* OtherTarget = Cast<AActor>(OtherBB->GetValueAsObject(TargetActorKey.SelectedKeyName));
				if (OtherTarget == Candidate)
				{
					return true;
				}
			}
		}
	}
	return false;
}

EBTNodeResult::Type UManicTaskFindFreeActor::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: ExecuteTask started."));

	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicTaskFindFreeActor: AIController is NULL."));
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicTaskFindFreeActor: Blackboard Component is NULL."));
		return EBTNodeResult::Failed;
	}

	UClass* TargetClass = BlackboardComp->GetValueAsClass(TargetClassKey.SelectedKeyName);
	if (!TargetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindFreeActor: Blackboard key '%s' is not set or not a valid class."),
			*TargetClassKey.SelectedKeyName.ToString());
		return EBTNodeResult::Failed;
	}
	UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Retrieved TargetClass '%s'."), *TargetClass->GetName());

	UWorld* World = AICon->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicTaskFindFreeActor: World context is NULL."));
		return EBTNodeResult::Failed;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(World, TargetClass, FoundActors);
	if (FoundActors.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindFreeActor: No actors of class %s found."), *TargetClass->GetName());
		return EBTNodeResult::Failed;
	}

	APawn* MyPawn = AICon->GetPawn();
	if (!MyPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("ManicTaskFindFreeActor: AI Pawn is NULL."));
		return EBTNodeResult::Failed;
	}
	FVector PawnLocation = MyPawn->GetActorLocation();

	// Build a list of free candidates.
	TArray<AActor*> FreeCandidates;
	for (AActor* Candidate : FoundActors)
	{
		if (!Candidate || Candidate == MyPawn)
			continue;

		bool bOccupied = false;
		for (const TSoftObjectPtr<AActor>& SoftAvoid : AvoidActors)
		{
			AActor* AvoidActor = SoftAvoid.LoadSynchronous();
			if (!AvoidActor)
				continue;

			float DistanceToAvoid = FVector::Dist(Candidate->GetActorLocation(), AvoidActor->GetActorLocation());
			if (DistanceToAvoid < AvoidanceRadius)
			{
				UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Candidate '%s' is near avoid actor '%s' (Distance: %f)."),
					*Candidate->GetName(), *AvoidActor->GetName(), DistanceToAvoid);
				bOccupied = true;
				break;
			}
		}
		if (bOccupied)
			continue;

		// Check if already targeted
		if (IsCandidateAlreadyTargeted(Candidate, World, MyPawn))
		{
			UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Candidate '%s' is already targeted by another NPC."), *Candidate->GetName());
			continue;
		}

		FreeCandidates.Add(Candidate);
	}

	if (FreeCandidates.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ManicTaskFindFreeActor: No free candidate found (all are occupied)."));
		return EBTNodeResult::Failed;
	}

	// Sort free candidates by distance from our pawn.
	FreeCandidates.Sort([PawnLocation](AActor& A, AActor& B)
	{
		return FVector::DistSquared(PawnLocation, A.GetActorLocation()) < FVector::DistSquared(PawnLocation, B.GetActorLocation());
	});

	// For variety, randomly select one candidate from the free list.
	int32 RandomIndex = FMath::RandRange(0, FreeCandidates.Num() - 1);
	AActor* ChosenActor = FreeCandidates[RandomIndex];

	// Based on WriteMode, set the blackboard keys
	switch (WriteMode)
	{
	case EFreeActorWriteMode::ActorOnly:
	{
		BlackboardComp->SetValueAsObject(TargetActorKey.SelectedKeyName, ChosenActor);
		UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Wrote actor '%s' to ActorKey only."), *ChosenActor->GetName());
	}
	break;

	case EFreeActorWriteMode::LocationOnly:
	{
		FVector Loc = ChosenActor->GetActorLocation();
		BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, Loc);
		UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Wrote location %s to LocationKey only."), *Loc.ToString());
	}
	break;

	case EFreeActorWriteMode::ActorAndLocation:
	default:
	{
		BlackboardComp->SetValueAsObject(TargetActorKey.SelectedKeyName, ChosenActor);
		FVector Loc = ChosenActor->GetActorLocation();
		BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, Loc);
		UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Wrote actor '%s' and location %s to Blackboard."), *ChosenActor->GetName(), *Loc.ToString());
	}
	break;
	}

	// Generate a random delay between MinSelectionDelay and MaxSelectionDelay.
	float RandomDelay = FMath::FRandRange(MinSelectionDelay, MaxSelectionDelay);
	UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Random delay selected: %f seconds."), RandomDelay);

	// Store the current time and random delay in node memory.
	FManicTaskFindFreeActorMemory* MyMemory = reinterpret_cast<FManicTaskFindFreeActorMemory*>(OwnerComp.GetNodeMemory(this, 0));
	MyMemory->StartTime = FPlatformTime::Seconds();
	MyMemory->SelectedDelay = RandomDelay;

	// Return InProgress so that TickTask can wait for the delay to elapse.
	return EBTNodeResult::InProgress;
}

void UManicTaskFindFreeActor::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FManicTaskFindFreeActorMemory* MyMemory = reinterpret_cast<FManicTaskFindFreeActorMemory*>(OwnerComp.GetNodeMemory(this, 0));
	double ElapsedTime = FPlatformTime::Seconds() - MyMemory->StartTime;

	if (ElapsedTime >= MyMemory->SelectedDelay)
	{
		UE_LOG(LogTemp, Log, TEXT("ManicTaskFindFreeActor: Delay elapsed (%.2f seconds). Finalizing target selection."), ElapsedTime);
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
