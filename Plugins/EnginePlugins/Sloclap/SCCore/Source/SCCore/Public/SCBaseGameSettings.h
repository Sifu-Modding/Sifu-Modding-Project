#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SCGameFlowData.h"
#include "SCBaseGameSettings.generated.h"

class UGameFlow;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SCCORE_API USCBaseGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasCheats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_AllowedContent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCGameFlowData m_GameFlow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UGameFlow>> m_ContenRestrictedGameFlows;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_AchievementsToIgnoreWhenCheckingPlatinum;
    
    USCBaseGameSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer BPF_GetAllowedContentGameplayTagContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> BPF_GetAchievementsToIgnoreWhenCheckingPlatinum();
    
};

