#pragma once
#include "CoreMinimal.h"
#include "EDebugMovableState.generated.h"

UENUM(BlueprintType)
enum class EDebugMovableState : uint8 {
    TooFar,
    Blocked,
    HasTarget,
    NotUsable,
    NoTarget,
};

