#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIConditionedAction.h"
#include "AILocalizedConditionedAction.generated.h"

USTRUCT(BlueprintType)
struct FAILocalizedConditionedAction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_DistanceTestExpression;
    
    SIFU_API FAILocalizedConditionedAction();
};

