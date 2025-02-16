#pragma once
#include "CoreMinimal.h"
#include "EBoundingBoxSides.generated.h"

UENUM(BlueprintType)
enum class EBoundingBoxSides : uint8 {
    None,
    Left,
    Right,
    Front = 4,
    Back = 16,
};

