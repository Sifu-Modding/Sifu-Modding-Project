#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "TransitionCanTurnNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTransitionCanTurnNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UTransitionCanTurnNotifyState();
};

