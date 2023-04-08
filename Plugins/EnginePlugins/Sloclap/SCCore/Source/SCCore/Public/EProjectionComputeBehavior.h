#pragma once
#include "CoreMinimal.h"
#include "EProjectionComputeBehavior.generated.h"

UENUM(BlueprintType)
enum class EProjectionComputeBehavior : uint8 {
    Raw,
    ClampToBorder,
    ClampToBorderOnlyVertical,
};

