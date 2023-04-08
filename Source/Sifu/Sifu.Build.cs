using UnrealBuildTool;

public class Sifu : ModuleRules
{
    public Sifu(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "UMG", "AIModule",
          "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "AnimationCore",
             "ApexDestruction",
            "AudioMixer",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysicsCore",
            "PropertyPath",
            "SCCore",
            "SCDialogManagerPlugin",
            "SignificanceManager",
              "Text2LipSync",
            });
    }
}