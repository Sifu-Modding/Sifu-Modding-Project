#pragma once
#include "CoreMinimal.h"
#include "EReplayOpenState.generated.h"

UENUM(BlueprintType)
enum class EReplayOpenState : uint8 {
    Preview,
    Edit,
};

