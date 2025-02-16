using UnrealBuildTool;

public class SifuGameTarget : TargetRules {
	public SifuGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"IgnoreCollisionModule",
			"Sifu",
		});
	}
}
