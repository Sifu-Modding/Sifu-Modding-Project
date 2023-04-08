#pragma once
#include "CoreMinimal.h"
#include "EOrderCommandType.generated.h"

UENUM(BlueprintType)
enum class EOrderCommandType : uint8 {
    Play,
    Cancel,
    CancelAll,
    Count,
    None,
};

