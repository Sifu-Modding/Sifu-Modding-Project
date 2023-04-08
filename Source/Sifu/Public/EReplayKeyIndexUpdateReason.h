#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyIndexUpdateReason.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyIndexUpdateReason : uint8 {
    KeyMoved,
    KeyInserted,
    Count,
    Invalid,
};

