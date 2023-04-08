#pragma once
#include "CoreMinimal.h"
#include "EReplayTimelineControlType.generated.h"

UENUM(BlueprintType)
enum class EReplayTimelineControlType : uint8 {
    Time,
    KeyPlacement,
    Count,
    Invalid,
};

