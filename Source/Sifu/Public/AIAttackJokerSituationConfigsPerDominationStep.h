#pragma once
#include "CoreMinimal.h"
#include "AIAttackJokerSituationConfig.h"
#include "AIAttackJokerSituationConfigsPerDominationStep.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackJokerSituationConfigsPerDominationStep {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAttackJokerSituationConfig m_Configs[4];
    
    SIFU_API FAIAttackJokerSituationConfigsPerDominationStep();
};

