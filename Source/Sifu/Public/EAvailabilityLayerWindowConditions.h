#pragma once
#include "CoreMinimal.h"
#include "EAvailabilityLayerWindowConditions.generated.h"

UENUM(BlueprintType)
enum class EAvailabilityLayerWindowConditions : uint8 {
    None,
    NoHit,
    Hit,
    Deflect = 0x4,
    Guard = 0x8,
    Avoided = 0x10,
};

