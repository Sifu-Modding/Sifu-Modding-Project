#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenSetupStatus.generated.h"

UENUM()
enum class ECameraAnimDrivenSetupStatus {
    Invalid,
    PendingComputation,
    PendingLaunch,
    Initialized,
};

