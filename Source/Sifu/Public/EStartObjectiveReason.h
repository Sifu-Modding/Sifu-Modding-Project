#pragma once
#include "CoreMinimal.h"
#include "EStartObjectiveReason.generated.h"

UENUM(BlueprintType)
enum class EStartObjectiveReason : uint8 {
    TimerElapsed,
    PlayerMoved,
};

