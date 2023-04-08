#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "CameraCutNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UCameraCutNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UCameraCutNotifyState();
};

