#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionDialogCompleted.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionDialogCompleted : public UAIPhaseTransition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DialogToWaitFor;
    
public:
    UAIPhaseTransitionDialogCompleted();
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractiveDialogInterrupted();
    
};

