using UnrealBuildTool;

public class Sifu : ModuleRules {
    public Sifu(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
           // "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "ApexDestruction",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            //"DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "NavigationSystem",
            "PhysicsCore",
            "SCCore",
            "SCDialogManagerPlugin",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "Text2LipSync",
            "UMG",
        });
    }
}
