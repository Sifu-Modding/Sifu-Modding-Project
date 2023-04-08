#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "ConditionOnTargetWeightEvaluation.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FConditionOnTargetWeightEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBonus;
    
    FConditionOnTargetWeightEvaluation();
};

