#pragma once
#include "CoreMinimal.h"
#include "BaseCombatPositionSettings.h"
#include "CombatPositionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class SIFU_API UCombatPositionSettings : public UBaseCombatPositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPositionEliminationAngle;
    
    UCombatPositionSettings();

};

