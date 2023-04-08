#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ESCOcclusionMode.h"
#include "SCSoundOcclusionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SCSOUNDOCCLUSION_API USCSoundOcclusionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPathDist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPathFactor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RTPCOcclusionName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCOcclusionMode m_eOcclusionMode;
    
    USCSoundOcclusionSettings();
};

