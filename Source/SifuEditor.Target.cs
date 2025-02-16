using UnrealBuildTool;

public class SifuEditorTarget : TargetRules {
	public SifuEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"IgnoreCollisionModule",
			"Sifu",
		});
	}
}
