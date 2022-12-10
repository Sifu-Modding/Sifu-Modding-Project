#pragma once
#include "CoreMinimal.h"
#include "EScoringKillType.generated.h"

UENUM()
enum class EScoringKillType : uint8 {
    Standard,
    EnvironmentalFallFromPushed,
    EnvironmentalWallSplat,
    None,
};

