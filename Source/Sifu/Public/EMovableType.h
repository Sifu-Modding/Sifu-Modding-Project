#pragma once
#include "CoreMinimal.h"
#include "EMovableType.generated.h"

UENUM(BlueprintType)
enum class EMovableType : uint8 {
    Pushable,
    Throwable,
    Count,
};

