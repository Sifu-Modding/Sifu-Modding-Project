#pragma once
#include "CoreMinimal.h"
#include "ETransitionOptionsBehavior.generated.h"

UENUM()
enum class ETransitionOptionsBehavior {
    UseAsStandardMapOption,
    UseAsReturnCondition,
    Count,
};

