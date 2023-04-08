#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceFreezeFrameHandling.generated.h"

UENUM(BlueprintType)
enum class EOrderServiceFreezeFrameHandling : uint8 {
    Freeze,
    IgnoreFreezeFrame,
    TickOnceOnStart,
};

