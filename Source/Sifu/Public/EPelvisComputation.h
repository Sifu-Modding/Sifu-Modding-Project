#pragma once
#include "CoreMinimal.h"
#include "EPelvisComputation.generated.h"

UENUM(BlueprintType)
enum class EPelvisComputation : uint8 {
    AllowAll,
    AllowForcedDirection,
    AnalogOnly,
};

