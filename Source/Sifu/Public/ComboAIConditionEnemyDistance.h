#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIComboCondition.h"
#include "ComboAIConditionEnemyDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionEnemyDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_condition;
    
    UComboAIConditionEnemyDistance();

};

