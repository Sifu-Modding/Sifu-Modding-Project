#pragma once
#include "CoreMinimal.h"
#include "EAIPaceTypes.generated.h"

UENUM(BlueprintType)
enum class EAIPaceTypes : uint8 {
    CloseToEnemy,
    FarFromEnemy,
    Attacking,
    Count,
};

