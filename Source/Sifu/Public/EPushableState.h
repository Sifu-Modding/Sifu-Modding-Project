#pragma once
#include "CoreMinimal.h"
#include "EPushableState.generated.h"

UENUM(BlueprintType)
enum class EPushableState : uint8 {
    Stopped,
    Moving,
    Falling,
    OnRail,
    OnRailFalling,
    Bouncing,
    Destroyed,
    None,
};

