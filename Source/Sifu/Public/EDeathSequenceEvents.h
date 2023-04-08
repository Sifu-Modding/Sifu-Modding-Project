#pragma once
#include "CoreMinimal.h"
#include "EDeathSequenceEvents.generated.h"

UENUM(BlueprintType)
enum class EDeathSequenceEvents : uint8 {
    DisplayMenu,
    Pause,
    HideMenu,
    PlayerStandsUp,
    SnapToDeathPose,
};

