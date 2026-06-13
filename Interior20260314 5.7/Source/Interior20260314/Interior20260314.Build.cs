using UnrealBuildTool;

public class Interior20260314 : ModuleRules
{
	public Interior20260314(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"GameplayTasks"
		});

		PublicIncludePaths.AddRange(new string[]
		{
			"Interior20260314/Enemy",
			"Interior20260314/Gameplay",
			"Interior20260314/Player",
			"Interior20260314/GameMode"
		});
	}
}