#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionBossKill.generated.h"

class UAIFightingComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionBossKill : public UAIPhaseTransition {
    GENERATED_BODY()
public:
    UAIPhaseTransitionBossKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnKillSpare(UAIFightingComponent* _aiComponent);
    
};

