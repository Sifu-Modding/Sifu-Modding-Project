#pragma once
#include "CoreMinimal.h"
#include "ESequentialLoopRule.generated.h"

UENUM(BlueprintType)
enum class ESequentialLoopRule : uint8 {
    LoopOnAllInSameOrder,
    LoopOnLast,
};

