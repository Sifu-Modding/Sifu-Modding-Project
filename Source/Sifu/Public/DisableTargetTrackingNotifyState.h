#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "DisableTargetTrackingNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UDisableTargetTrackingNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UDisableTargetTrackingNotifyState();
};

