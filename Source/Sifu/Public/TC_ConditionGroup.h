#pragma once
#include "CoreMinimal.h"
#include "EvaluateTargetCondition.h"
#include "EConditionGroupOperators.h"
#include "TC_ConditionGroup.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_ConditionGroup : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UEvaluateTargetCondition*> m_Conditions;
    
    UTC_ConditionGroup();
};

