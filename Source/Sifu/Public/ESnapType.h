#pragma once
#include "CoreMinimal.h"
#include "ESnapType.generated.h"

UENUM(BlueprintType)
enum class ESnapType : uint8 {
    NoOvershoot,
    Linear,
    Stretched,
};

