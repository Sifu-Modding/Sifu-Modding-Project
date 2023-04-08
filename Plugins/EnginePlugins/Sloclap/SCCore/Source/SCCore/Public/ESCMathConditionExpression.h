#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionExpression.generated.h"

UENUM(BlueprintType)
enum class ESCMathConditionExpression : uint8 {
    And,
    Or,
};

