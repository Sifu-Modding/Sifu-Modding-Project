using UnrealBuildTool;

public class UESVON : ModuleRules {
    public UESVON(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "NavigationSystem",
        });
    }
}
