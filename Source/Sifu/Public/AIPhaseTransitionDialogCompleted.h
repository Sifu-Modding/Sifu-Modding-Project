#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionDialogCompleted.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionDialogCompleted : public UAIPhaseTransition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName m_DialogToWaitFor;
    
public:
    UAIPhaseTransitionDialogCompleted();
private:
    UFUNCTION()
    void OnInteractiveDialogInterrupted();
    
};

