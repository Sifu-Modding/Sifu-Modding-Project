#pragma once
#include "CoreMinimal.h"
#include "ECinematicAnimBlendState.generated.h"

UENUM(BlueprintType)
enum class ECinematicAnimBlendState : uint8 {
    EaseIn,
    Playing,
    EaseOut,
    EaseOutFinished,
    None,
};

