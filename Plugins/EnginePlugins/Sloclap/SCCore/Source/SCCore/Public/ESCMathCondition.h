#pragma once
#include "CoreMinimal.h"
#include "ESCMathCondition.generated.h"

UENUM(BlueprintType)
enum class ESCMathCondition : uint8 {
    Lower,
    LowerOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
};

