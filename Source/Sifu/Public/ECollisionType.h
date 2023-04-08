#pragma once
#include "CoreMinimal.h"
#include "ECollisionType.generated.h"

UENUM(BlueprintType)
enum class ECollisionType : uint8 {
    SameTarget,
    NoTarget,
    DifferentTargetSamePrio,
    DifferentTargetDifferentPrio,
};

