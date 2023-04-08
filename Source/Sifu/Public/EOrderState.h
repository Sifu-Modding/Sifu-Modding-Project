#pragma once
#include "CoreMinimal.h"
#include "EOrderState.generated.h"

UENUM(BlueprintType)
enum class EOrderState : uint8 {
    None,
    Starting,
    Processing,
    Stopped,
    Cancelled,
    Count,
};

