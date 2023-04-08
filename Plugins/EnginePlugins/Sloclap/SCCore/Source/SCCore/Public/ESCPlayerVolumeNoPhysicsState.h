#pragma once
#include "CoreMinimal.h"
#include "ESCPlayerVolumeNoPhysicsState.generated.h"

UENUM(BlueprintType)
enum class ESCPlayerVolumeNoPhysicsState : uint8 {
    Overlapping,
    OverlappingThisVolume,
    FullyInside,
    FullyInsideThisVolume,
    Count,
};

