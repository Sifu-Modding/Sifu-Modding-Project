#pragma once
#include "CoreMinimal.h"
#include "ESCSignificanceBuckets.generated.h"

UENUM(BlueprintType)
enum class ESCSignificanceBuckets : uint8 {
    None,
    High,
    Medium,
    Low,
    Lowest,
    Count,
};

