#pragma once
#include "CoreMinimal.h"
#include "EScoringActionType.generated.h"

UENUM(BlueprintType)
enum class EScoringActionType : uint8 {
    Attack,
    Defense,
    Kill,
    Taunt,
    None,
};

