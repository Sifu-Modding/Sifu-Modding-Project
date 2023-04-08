#pragma once
#include "CoreMinimal.h"
#include "EWallJumpAttackPhase.generated.h"

UENUM(BlueprintType)
enum class EWallJumpAttackPhase : uint8 {
    Entry,
    Attack,
    Count,
    None,
};

