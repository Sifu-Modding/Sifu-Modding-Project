#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyPresetOverride.generated.h"

UENUM()
enum class EReplayKeyPresetOverride {
    None,
    Blend,
    CameraMode,
    Fading = 0x4,
};

