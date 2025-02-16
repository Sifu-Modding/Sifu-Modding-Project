#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIPhaseTransition.generated.h"

class UAIFightingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransition : public UObject {
    GENERATED_BODY()
public:
    UAIPhaseTransition();

protected:
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoNextPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnParentPhaseStarted(UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnParentPhaseEnded(UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetLog() const;
    
};

