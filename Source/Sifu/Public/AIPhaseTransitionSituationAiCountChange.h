#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionInteger.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionSituationAiCountChange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionSituationAiCountChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionInteger m_Expression;
    
public:
    UAIPhaseTransitionSituationAiCountChange();
};

