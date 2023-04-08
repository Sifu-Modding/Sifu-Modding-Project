#pragma once
#include "CoreMinimal.h"
#include "EDeadZoneStatus.generated.h"

UENUM(BlueprintType)
enum class EDeadZoneStatus : uint8 {
    InSafeZone,
    InFarDeadZone,
    InNearDeadZone,
};

