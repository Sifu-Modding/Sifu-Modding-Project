#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "SCGameFlowData.h"
#include "GameplayTagContainer.h"
#include "SCBaseGameSettings.generated.h"

class UGameFlow;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SCCORE_API USCBaseGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bHasCheats;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer m_AllowedContent;
    
    UPROPERTY(Config, EditAnywhere)
    FSCGameFlowData m_GameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UGameFlow>> m_ContenRestrictedGameFlows;
    
    USCBaseGameSettings();
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer BPF_GetAllowedContentGameplayTagContainer();
    
};

