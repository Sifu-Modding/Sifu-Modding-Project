#pragma once
#include "CoreMinimal.h"
#include "EScoringActionType.generated.h"

UENUM()
enum class EScoringActionType : uint8 {
    Attack,
    Defense,
    Kill,
    Taunt,
    None,
};

