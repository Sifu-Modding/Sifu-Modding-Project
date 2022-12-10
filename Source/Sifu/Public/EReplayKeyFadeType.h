#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyFadeType.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyFadeType : uint8 {
    Off,
    ToBlack,
    FromBlack,
    Count,
    Invalid,
};

