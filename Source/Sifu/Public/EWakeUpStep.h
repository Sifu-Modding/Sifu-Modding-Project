#pragma once
#include "CoreMinimal.h"
#include "EWakeUpStep.generated.h"

UENUM(BlueprintType)
enum class EWakeUpStep : uint8 {
    JustSleeping,
    Sleeping,
    JustTryingToWakeUp,
    TryingToWakeUp,
};

