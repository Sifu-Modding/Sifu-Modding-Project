#pragma once
#include "CoreMinimal.h"
#include "EUpdateAngleMode.generated.h"

UENUM(BlueprintType)
enum class EUpdateAngleMode : uint8 {
    Both,
    OnlyEnd,
};

