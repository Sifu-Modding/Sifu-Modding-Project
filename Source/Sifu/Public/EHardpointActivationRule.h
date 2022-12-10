#pragma once
#include "CoreMinimal.h"
#include "EHardpointActivationRule.generated.h"

UENUM()
enum class EHardpointActivationRule : uint8 {
    Sequential,
    Random,
};

