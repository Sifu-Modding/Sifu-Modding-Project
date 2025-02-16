#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionDifficultyLevelChanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionDifficultyLevelChanged : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_Expression;
    
public:
    UAIPhaseTransitionDifficultyLevelChanged();

};

