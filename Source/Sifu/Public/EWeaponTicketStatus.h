#pragma once
#include "CoreMinimal.h"
#include "EWeaponTicketStatus.generated.h"

UENUM(BlueprintType)
enum class EWeaponTicketStatus : uint8 {
    Dormant,
    NotUsable,
    InCooldown,
    Owned,
    Available,
};

