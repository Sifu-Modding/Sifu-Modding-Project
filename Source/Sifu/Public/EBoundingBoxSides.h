#pragma once
#include "CoreMinimal.h"
#include "EBoundingBoxSides.generated.h"

UENUM(BlueprintType)
enum class EBoundingBoxSides : uint8 {
    None,
    Left,
    Right,
    Front = 0x4,
    Back = 0x10,
};

