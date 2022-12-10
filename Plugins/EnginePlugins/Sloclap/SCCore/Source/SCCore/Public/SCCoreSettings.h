#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DeveloperSettings.h"
#include "SCVolumeClusterMaterialsPath.h"
#include "ActorsPoolConfig.h"
#include "GameplayTagContainer.h"
#include "SCErrorPopup.h"
#include "SCCoreSettings.generated.h"

class USCCheatManagerSettings;
class USCInGameAchievementsManagerSettings;
class ASCSequenceAnchor;
class USCBaseGameSettings;
class USCLevelSequenceDirectorData;
class USCAiAction;
class AActor;
class ASCCharacterImpostor;
class UCurveFloat;

UCLASS(BlueprintType, DefaultConfig, Config=SCCore)
class SCCORE_API USCCoreSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USCBaseGameSettings> m_GameSettingsClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USCInGameAchievementsManagerSettings> m_achievementsSettings;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USCCheatManagerSettings> m_cheatSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FSCVolumeClusterMaterialsPath m_DefaultVolumeVisualizerMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FSCVolumeClusterMaterialsPath> m_VolumeVisualizerMaterialsMap;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ASCSequenceAnchor> m_LevelSequenceAnchorClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<USCLevelSequenceDirectorData> m_LevelSequenceDefaultDirectorData;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fLevelSequenceForcedClothSimulationDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActorsPoolConfig> m_DefaultActorPools;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag m_AiActionBehaviorTag;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag m_AiAttackActionBehaviorTag;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTag> m_AiAttackSubActionBehaviorTags;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, TSubclassOf<USCAiAction>> m_DevDefinedAiActionsMap;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> m_StreamingDebugTrackedActors;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bSaveStreamingActors;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iMaxActorsAllowedPerLevelWithTransform;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPlatformForceClassicTravel;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ASCCharacterImpostor> m_DefaultCharacterImpostorClass;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDelayBeforeImpostorCopyPose;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDelayBeforeShowImpostor;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsLowEndPlatform;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> m_IsoCultureToDisplayName;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDefaultScreenRatio;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenAboveDefaultRatio;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenBelowDefaultRatio;
    
    UPROPERTY(Config, EditAnywhere)
    FSCErrorPopup m_GenericErrorPopupTexts[10];
    
    UPROPERTY(Config, EditAnywhere)
    FSCErrorPopup m_GenericErrorTexts[6];
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPlatformRequireAccountPickup;
    
private:
    UPROPERTY(Config, EditAnywhere)
    float m_fMaxAICharacterCorpseTimeout;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iMaxAICharacterCorpse;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iMaxAIImpostors;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bActorPoolsEnabled;
    
public:
    USCCoreSettings();
    UFUNCTION(BlueprintPure)
    static UCurveFloat* BPF_GetHUDOffsetFromBlackBarRatioCurve();
    
};

