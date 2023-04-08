#pragma once
#include "CoreMinimal.h"
#include "EMCDominationGaugeAsFlag.generated.h"

UENUM(BlueprintType)
enum class EMCDominationGaugeAsFlag : uint8 {
    None,
    Negative,
    Neutral,
    Positive = 0x4,
    PositivePlus = 0x8,
};

