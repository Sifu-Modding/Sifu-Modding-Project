#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionFloat.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionHealthChange.generated.h"

class UHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionHealthChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_Expression;
    
public:
    UAIPhaseTransitionHealthChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathDismiss(UHealthComponent* _healthComponent);
    
};

