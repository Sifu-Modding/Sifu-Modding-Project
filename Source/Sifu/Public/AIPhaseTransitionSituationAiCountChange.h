#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "SCMathExpressionInteger.h"
#include "AIPhaseTransitionSituationAiCountChange.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionSituationAiCountChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionInteger m_Expression;
    
public:
    UAIPhaseTransitionSituationAiCountChange();
};

