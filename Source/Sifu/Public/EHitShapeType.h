#pragma once
#include "CoreMinimal.h"
#include "EHitShapeType.generated.h"

UENUM(BlueprintType)
enum class EHitShapeType : uint8 {
    None,
    Line,
    Box,
    Sphere,
    Capsule,
    Chain,
    Count,
};

