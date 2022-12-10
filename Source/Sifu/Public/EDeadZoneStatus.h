#pragma once
#include "CoreMinimal.h"
#include "EDeadZoneStatus.generated.h"

UENUM()
enum class EDeadZoneStatus {
    InSafeZone,
    InFarDeadZone,
    InNearDeadZone,
};

