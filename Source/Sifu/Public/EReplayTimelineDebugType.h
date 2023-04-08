#pragma once
#include "CoreMinimal.h"
#include "EReplayTimelineDebugType.generated.h"

UENUM(BlueprintType)
enum class EReplayTimelineDebugType : uint8 {
    RealCutKeyPosition,
    Count,
    Invalid,
};

