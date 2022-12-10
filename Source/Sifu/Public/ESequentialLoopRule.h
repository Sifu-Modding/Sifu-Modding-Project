#pragma once
#include "CoreMinimal.h"
#include "ESequentialLoopRule.generated.h"

UENUM()
enum class ESequentialLoopRule : uint8 {
    LoopOnAllInSameOrder,
    LoopOnLast,
};

