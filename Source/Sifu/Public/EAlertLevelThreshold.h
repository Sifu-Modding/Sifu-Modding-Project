#pragma once
#include "CoreMinimal.h"
#include "EAlertLevelThreshold.generated.h"

UENUM(BlueprintType)
enum class EAlertLevelThreshold : uint8 {
    LowerBoundNoClamp,
    UpperBoundNoClamp,
    LowerBound,
    UpperBound,
};

