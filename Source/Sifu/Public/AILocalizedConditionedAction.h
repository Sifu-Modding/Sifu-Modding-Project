#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
#include "SCMathExpressionFloat.h"
#include "AILocalizedConditionedAction.generated.h"

USTRUCT()
struct FAILocalizedConditionedAction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_DistanceTestExpression;
    
    SIFU_API FAILocalizedConditionedAction();
};

