#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIComboCondition.h"
#include "ComboAIConditionTimedTargetDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionTimedTargetDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UPROPERTY(EditAnywhere)
    float m_fValidationTime;
    
public:
    UComboAIConditionTimedTargetDistance();
};

