#pragma once
#include "CoreMinimal.h"
#include "EWakeUpStep.generated.h"

UENUM()
enum class EWakeUpStep {
    JustSleeping,
    Sleeping,
    JustTryingToWakeUp,
    TryingToWakeUp,
};

