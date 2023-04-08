#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceConditionUpdateFrequency.generated.h"

UENUM(BlueprintType)
enum class EOrderServiceConditionUpdateFrequency : uint8 {
    OncePerOrder,
    OnDemand,
};

