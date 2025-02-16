#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIComboCondition.h"
#include "ComboAIConditionTimedTargetDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionTimedTargetDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValidationTime;
    
public:
    UComboAIConditionTimedTargetDistance();

};

