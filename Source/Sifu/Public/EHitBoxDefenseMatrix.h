#pragma once
#include "CoreMinimal.h"
#include "EHitBoxDefenseMatrix.generated.h"

UENUM(BlueprintType)
enum class EHitBoxDefenseMatrix : uint8 {
    None,
    Dodge,
    Deflect,
    Guard = 4,
};

