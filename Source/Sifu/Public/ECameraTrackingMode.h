#pragma once
#include "CoreMinimal.h"
#include "ECameraTrackingMode.generated.h"

UENUM(BlueprintType)
enum class ECameraTrackingMode : uint8 {
    PlayerRootComponent,
    PlayerPelvisBone,
    PlayerCamJoint,
};

