// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SifuEditor : ModuleRules
{
	public SifuEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {"Sifu","AssetTools", "Core", "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "UMG", "AIModule", });

        PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] {  });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
