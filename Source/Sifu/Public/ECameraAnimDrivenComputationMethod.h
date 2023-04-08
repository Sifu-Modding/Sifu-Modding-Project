#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenComputationMethod.generated.h"

UENUM(BlueprintType)
enum class ECameraAnimDrivenComputationMethod : uint8 {
    ClosestAngle,
    ClosestDistance,
    Random,
    AlwaysFirst,
    Count,
};

