#pragma once
#include "CoreMinimal.h"
#include "EStaminaImpactType.generated.h"

UENUM(BlueprintType)
enum class EStaminaImpactType : uint8 {
    StopRecovery,
    Consumption,
    StartRecovery,
    Count,
    None,
};

