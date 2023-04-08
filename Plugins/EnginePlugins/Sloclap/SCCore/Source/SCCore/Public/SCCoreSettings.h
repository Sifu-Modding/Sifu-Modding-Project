#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "ActorsPoolConfig.h"
#include "SCErrorPopup.h"
#include "SCVolumeClusterMaterialsPath.h"
#include "Templates/SubclassOf.h"
#include "SCCoreSettings.generated.h"

class AActor;
class ASCCharacterImpostor;
class ASCSequenceAnchor;
class UCurveFloat;
class USCAiAction;
class USCBaseGameSettings;
class USCCheatManagerSettings;
class USCInGameAchievementsManagerSettings;
class USCLevelSequenceDirectorData;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=SCCore)
class SCCORE_API USCCoreSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCBaseGameSettings> m_GameSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCInGameAchievementsManagerSettings> m_achievementsSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCCheatManagerSettings> m_cheatSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCVolumeClusterMaterialsPath m_DefaultVolumeVisualizerMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSCVolumeClusterMaterialsPath> m_VolumeVisualizerMaterialsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASCSequenceAnchor> m_LevelSequenceAnchorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USCLevelSequenceDirectorData> m_LevelSequenceDefaultDirectorData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLevelSequenceForcedClothSimulationDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorsPoolConfig> m_DefaultActorPools;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_AiActionBehaviorTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_AiAttackActionBehaviorTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> m_AiAttackSubActionBehaviorTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<USCAiAction>> m_DevDefinedAiActionsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> m_StreamingDebugTrackedActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSaveStreamingActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxActorsAllowedPerLevelWithTransform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlatformForceClassicTravel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASCCharacterImpostor> m_DefaultCharacterImpostorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeImpostorCopyPose;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeShowImpostor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLowEndPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> m_IsoCultureToDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultScreenRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenAboveDefaultRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenBelowDefaultRatio;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCErrorPopup m_GenericErrorPopupTexts[10];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCErrorPopup m_GenericErrorTexts[6];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlatformRequireAccountPickup;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAICharacterCorpseTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAICharacterCorpse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAIImpostors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActorPoolsEnabled;
    
public:
    USCCoreSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCurveFloat* BPF_GetHUDOffsetFromBlackBarRatioCurve();
    
};

