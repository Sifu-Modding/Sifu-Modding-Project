#pragma once
#include "CoreMinimal.h"
#include "ETargetFilters.generated.h"

UENUM(BlueprintType)
enum class ETargetFilters : uint8 {
    None,
    Character,
    Environment,
    Count,
};

