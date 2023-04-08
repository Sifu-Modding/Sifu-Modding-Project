#pragma once
#include "CoreMinimal.h"
#include "ESimpleAxisSide.generated.h"

UENUM(BlueprintType)
enum class ESimpleAxisSide : uint8 {
    PositiveAxis,
    NegativeAxis,
    BothSides,
    None,
};

