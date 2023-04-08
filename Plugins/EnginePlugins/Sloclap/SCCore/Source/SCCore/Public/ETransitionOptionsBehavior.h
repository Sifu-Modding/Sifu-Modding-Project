#pragma once
#include "CoreMinimal.h"
#include "ETransitionOptionsBehavior.generated.h"

UENUM(BlueprintType)
enum class ETransitionOptionsBehavior : uint8 {
    UseAsStandardMapOption,
    UseAsReturnCondition,
    Count,
};

