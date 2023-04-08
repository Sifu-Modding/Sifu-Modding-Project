#pragma once
#include "CoreMinimal.h"
#include "EGetActorsRelativeSideToBoxResult.generated.h"

UENUM(BlueprintType)
enum class EGetActorsRelativeSideToBoxResult : uint8 {
    AxisX,
    AxisY,
    No,
};

