#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIComboCondition.h"
#include "ComboAIConditionEnemyDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionEnemyDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboAIConditionEnemyDistance();
};

