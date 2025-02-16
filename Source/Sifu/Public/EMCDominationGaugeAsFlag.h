#pragma once
#include "CoreMinimal.h"
#include "EMCDominationGaugeAsFlag.generated.h"

UENUM(BlueprintType)
enum class EMCDominationGaugeAsFlag : uint8 {
    None,
    Negative,
    Neutral,
    Positive = 4,
    PositivePlus = 8,
};

