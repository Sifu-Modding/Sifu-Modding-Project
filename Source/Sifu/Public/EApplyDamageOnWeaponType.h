#pragma once
#include "CoreMinimal.h"
#include "EApplyDamageOnWeaponType.generated.h"

UENUM()
enum class EApplyDamageOnWeaponType : int32 {
    Always,
    Never,
    OnFirstHit,
    OnLastHit,
    Count,
};

