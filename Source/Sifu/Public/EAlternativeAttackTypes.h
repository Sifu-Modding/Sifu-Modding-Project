#pragma once
#include "CoreMinimal.h"
#include "EAlternativeAttackTypes.generated.h"

UENUM(BlueprintType)
enum class EAlternativeAttackTypes : uint8 {
    Stun,
    Knockdown,
    Pushback,
    AerialAvoid,
    GroundedAvoid,
    Count,
    None,
};

