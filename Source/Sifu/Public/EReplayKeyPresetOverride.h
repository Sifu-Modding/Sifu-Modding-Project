#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyPresetOverride.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyPresetOverride : uint8 {
    None,
    Blend,
    CameraMode,
    Fading = 4,
};

