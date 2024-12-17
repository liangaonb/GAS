// +liangaonb

using UnrealBuildTool;
using System.Collections.Generic;

public class GASEditorTarget : TargetRules
{
	public GASEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "GAS" } );
	}
}
