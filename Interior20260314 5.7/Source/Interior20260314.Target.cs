using UnrealBuildTool;
using System.Collections.Generic;

public class Interior20260314Target : TargetRules
{
	public Interior20260314Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V6;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("Interior20260314");
	}
}
