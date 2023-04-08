#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionPhaseDuration.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionPhaseDuration : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
public:
    UAIPhaseTransitionPhaseDuration();
protected:
    UFUNCTION(BlueprintCallable)
    void OnComboFinished();
    
};

