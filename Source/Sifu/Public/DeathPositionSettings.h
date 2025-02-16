#pragma once
#include "CoreMinimal.h"
#include "BaseCombatPositionSettings.h"
#include "DeathPositionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class SIFU_API UDeathPositionSettings : public UBaseCombatPositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeavySurpriseDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLightSurpriseDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iProbaToPlayLightSurprise;
    
    UDeathPositionSettings();

};

