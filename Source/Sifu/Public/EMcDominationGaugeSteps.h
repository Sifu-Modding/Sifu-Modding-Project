#pragma once
#include "CoreMinimal.h"
#include "EMcDominationGaugeSteps.generated.h"

UENUM(BlueprintType)
enum class EMcDominationGaugeSteps : uint8 {
    Negative,
    Neutral,
    Positive,
    PositivePlus,
    Count,
    None,
};

