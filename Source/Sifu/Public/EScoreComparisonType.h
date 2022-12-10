#pragma once
#include "CoreMinimal.h"
#include "EScoreComparisonType.generated.h"

UENUM(BlueprintType)
enum class EScoreComparisonType : uint8 {
    GreaterThanOrEquals,
    LessThanOrEquals,
    Count,
};

