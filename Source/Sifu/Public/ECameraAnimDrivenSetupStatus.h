#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenSetupStatus.generated.h"

UENUM(BlueprintType)
enum class ECameraAnimDrivenSetupStatus : uint8 {
    Invalid,
    PendingComputation,
    PendingLaunch,
    Initialized,
};

