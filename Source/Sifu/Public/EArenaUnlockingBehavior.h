#pragma once
#include "CoreMinimal.h"
#include "EArenaUnlockingBehavior.generated.h"

UENUM(BlueprintType)
enum class EArenaUnlockingBehavior : uint8 {
    AllStarsCount,
    OnlyPreviousBatchStarsCount,
};

