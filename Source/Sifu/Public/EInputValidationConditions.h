#pragma once
#include "CoreMinimal.h"
#include "EInputValidationConditions.generated.h"

UENUM(BlueprintType)
enum class EInputValidationConditions : uint8 {
    None,
    Ability,
    AvailabilityLayers,
};

