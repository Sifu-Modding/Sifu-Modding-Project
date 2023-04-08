#pragma once
#include "CoreMinimal.h"
#include "BasePositionSettings.h"
#include "EAIWuguanTicketEvaluation.h"
#include "BaseCombatPositionSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseCombatPositionSettings : public UBasePositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_fTestScoreFactors;
    
    UBaseCombatPositionSettings();
};

