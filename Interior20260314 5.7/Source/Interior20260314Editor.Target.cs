using UnrealBuildTool;
using System.Collections.Generic;

public class Interior20260314EditorTarget : TargetRules
{
	public Interior20260314EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V6;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("Interior20260314");
	}
}
