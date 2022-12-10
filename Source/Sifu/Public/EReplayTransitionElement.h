#pragma once
#include "CoreMinimal.h"
#include "EReplayTransitionElement.generated.h"

UENUM()
enum class EReplayTransitionElement : uint8 {
    TimeDilation,
    CurrentTransition,
};

