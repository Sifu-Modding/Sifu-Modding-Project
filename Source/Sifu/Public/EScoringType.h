#pragma once
#include "CoreMinimal.h"
#include "EScoringType.generated.h"

UENUM(BlueprintType)
enum class EScoringType : uint8 {
    CombatPoints,
    Age,
    BestTime,
    Count,
};

