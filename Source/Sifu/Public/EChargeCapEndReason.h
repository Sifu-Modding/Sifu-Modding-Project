#pragma once
#include "CoreMinimal.h"
#include "EChargeCapEndReason.generated.h"

UENUM(BlueprintType)
enum class EChargeCapEndReason : uint8 {
    CapValidated,
    InterruptedOnPurpose,
    Interrupted,
    InterruptedDuringExtraTime,
    Count,
};

