#pragma once
#include "CoreMinimal.h"
#include "ETransitionRotationDirection.generated.h"

UENUM(BlueprintType)
enum class ETransitionRotationDirection : uint8 {
    Left,
    Right,
    All,
    Count,
    None,
};

