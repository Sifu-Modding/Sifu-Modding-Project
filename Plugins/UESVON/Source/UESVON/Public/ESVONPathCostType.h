#pragma once
#include "CoreMinimal.h"
#include "ESVONPathCostType.generated.h"

UENUM(BlueprintType)
enum class ESVONPathCostType : uint8 {
    MANHATTAN,
    EUCLIDEAN,
};

