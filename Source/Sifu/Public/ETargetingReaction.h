#pragma once
#include "CoreMinimal.h"
#include "ETargetingReaction.generated.h"

UENUM(BlueprintType)
enum class ETargetingReaction : uint8 {
    Guard,
    Deflect,
    Dodge,
    Hit,
    Attack,
    Grab,
    Throwable,
    Count,
};

