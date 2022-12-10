#pragma once
#include "CoreMinimal.h"
#include "EScoreType.generated.h"

UENUM(BlueprintType)
enum class EScoreType : uint8 {
    Points,
    Time,
    Count,
};

