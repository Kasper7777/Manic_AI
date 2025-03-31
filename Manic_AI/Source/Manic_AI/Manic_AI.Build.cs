using UnrealBuildTool;
using System.Collections.Generic;

public class Manic_AI : ModuleRules
{
	public Manic_AI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"AIModule",          // AI-related functionality (includes Behavior Trees)
			"GameplayTasks",      // Required for running Behavior Tree tasks
			"NavigationSystem"
			// "Kismet"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore"
		});

		// Uncomment if you use Slate UI:
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if using online features:
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// Uncomment if using Steam:
		// DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}