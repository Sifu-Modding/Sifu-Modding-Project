#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraMeshFading.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyCameraMeshFading : uint8 {
    Ignored,
    Enabled,
    Disabled,
    Count,
    Invalid,
};

