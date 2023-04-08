#pragma once
#include "CoreMinimal.h"
#include "EReplayTransitionElement.generated.h"

UENUM(BlueprintType)
enum class EReplayTransitionElement : uint8 {
    TimeDilation,
    CurrentTransition,
};

