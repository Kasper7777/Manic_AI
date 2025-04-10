#include "Manic_AI.h"

#define LOCTEXT_NAMESPACE "FManic_AIModule"

void FManic_AIModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("Manic_AI Module Loaded Successfully!"));
}

void FManic_AIModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("Manic_AI Module Shutdown!"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FManic_AIModule, Manic_AI)
