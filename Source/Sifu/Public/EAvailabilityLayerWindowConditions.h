#pragma once
#include "CoreMinimal.h"
#include "EAvailabilityLayerWindowConditions.generated.h"

UENUM(BlueprintType)
enum class EAvailabilityLayerWindowConditions : uint8 {
    None,
    NoHit,
    Hit,
    Deflect = 4,
    Guard = 8,
    Avoided = 16,
};

