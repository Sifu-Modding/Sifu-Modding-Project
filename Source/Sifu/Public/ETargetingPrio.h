#pragma once
#include "CoreMinimal.h"
#include "ETargetingPrio.generated.h"

UENUM(BlueprintType)
enum class ETargetingPrio : uint8 {
    DesignatedPrecise,
    DesignatedRough,
    CurrentAttacked,
    Nearest,
    NearestMenace,
    LockMoveTarget,
    Preview,
    AllInRange,
    Count,
};

