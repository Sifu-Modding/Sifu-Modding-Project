#pragma once
#include "CoreMinimal.h"
#include "EScoringKillType.generated.h"

UENUM(BlueprintType)
enum class EScoringKillType : uint8 {
    Standard,
    EnvironmentalFallFromPushed,
    EnvironmentalWallSplat,
    None,
};

