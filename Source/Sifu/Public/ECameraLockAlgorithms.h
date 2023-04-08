#pragma once
#include "CoreMinimal.h"
#include "ECameraLockAlgorithms.generated.h"

UENUM(BlueprintType)
enum class ECameraLockAlgorithms : uint8 {
    LockOnTarget,
    FollowingOwnerMovement,
    FramingContainer,
    Count,
    None,
};

