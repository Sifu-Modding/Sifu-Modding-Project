#pragma once
#include "CoreMinimal.h"
//#include "AkChannelConfiguration.h"
#include "Engine/DeveloperSettings.h"
#include "AudioOutput.h"
#include "SoundSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SIFU_API USoundSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSoundMoods;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GameplaySFXState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GameplaySFXStateOn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GameplaySFXStateOff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DialogVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AdvancedVibrationStrengthRTPC;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AdvancedVibrationState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AdvancedVibrationStateON;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AdvancedVibrationStateOFF;
    
   /* UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkChannelConfiguration m_eDefaultChannelConfig;*/
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioOutput m_AudioOutputList[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Audio3DRTPC;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_HandlingMonoBusList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceArchetypeSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceVariationSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceGenderSwitchGroup;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceGenderSwitchValues[2];
    
    USoundSettings();
};

