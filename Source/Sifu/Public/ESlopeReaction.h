#pragma once
#include "CoreMinimal.h"
#include "ESlopeReaction.generated.h"

UENUM()
enum class ESlopeReaction : int32 {
    FallFromPushed,
    FallOnSlope,
    None,
};

