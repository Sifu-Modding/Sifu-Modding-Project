#pragma once
#include "CoreMinimal.h"
#include "EHitBoxAttackProperties.generated.h"

UENUM(BlueprintType)
enum class EHitBoxAttackProperties : uint8 {
    KnockDown,
    PushBack,
    Stun,
    Count,
    None,
};

