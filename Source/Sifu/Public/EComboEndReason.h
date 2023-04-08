#pragma once
#include "CoreMinimal.h"
#include "EComboEndReason.generated.h"

UENUM(BlueprintType)
enum class EComboEndReason : uint8 {
    Finished,
    TicketOverride,
    ComboStartFailed,
    BehaviorCancelled,
    MoveToTargetFailed,
    RangeBlockedTimeout,
    Defending,
    WeaponBroke,
    WeaponDropped,
    Parried,
    IsStun,
    PunishableAvoided,
    ComboAssetChanged,
    Custom,
};

