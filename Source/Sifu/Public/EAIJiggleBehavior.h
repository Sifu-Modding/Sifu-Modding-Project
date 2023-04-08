#pragma once
#include "CoreMinimal.h"
#include "EAIJiggleBehavior.generated.h"

UENUM(BlueprintType)
enum class EAIJiggleBehavior : uint8 {
    None,
    JiggleMove,
    JiggleAnim,
    Count,
};

