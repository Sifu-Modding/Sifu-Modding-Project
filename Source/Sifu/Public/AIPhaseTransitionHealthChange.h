#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "SCMathExpressionFloat.h"
#include "AIPhaseTransitionHealthChange.generated.h"

class UHealthComponent;

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionHealthChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_Expression;
    
public:
    UAIPhaseTransitionHealthChange();
protected:
    UFUNCTION()
    void OnDeathDismiss(UHealthComponent* _healthComponent);
    
};

