#pragma once
#include "CoreMinimal.h"
#include "EAIContextualDefenseType.generated.h"

UENUM(BlueprintType)
enum class EAIContextualDefenseType : uint8 {
    Default,
    Throwable,
    FromGround,
    Count,
};

