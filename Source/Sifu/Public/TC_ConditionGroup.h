#pragma once
#include "CoreMinimal.h"
#include "EConditionGroupOperators.h"
#include "EvaluateTargetCondition.h"
#include "TC_ConditionGroup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_ConditionGroup : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEvaluateTargetCondition*> m_Conditions;
    
    UTC_ConditionGroup();
};

