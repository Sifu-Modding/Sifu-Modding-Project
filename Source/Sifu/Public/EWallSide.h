#pragma once
#include "CoreMinimal.h"
#include "EWallSide.generated.h"

UENUM(BlueprintType)
enum class EWallSide : uint8 {
    Left,
    Right,
    AnyDirection,
};

