#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransitionBossKill.h"
#include "AIPhaseTransitionBossSpare.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionBossSpare : public UAIPhaseTransitionBossKill {
    GENERATED_BODY()
public:
    UAIPhaseTransitionBossSpare();
};

