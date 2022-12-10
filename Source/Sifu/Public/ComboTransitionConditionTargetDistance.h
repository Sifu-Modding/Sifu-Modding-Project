#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "SCMathExpressionFloat.h"
#include "ComboTransitionConditionTargetDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionTargetDistance : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboTransitionConditionTargetDistance();
};

