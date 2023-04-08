#pragma once
#include "CoreMinimal.h"
#include "EAngleComputeMethod.generated.h"

UENUM(BlueprintType)
enum class EAngleComputeMethod : uint8 {
    SelfToTargetOnTargetForward,
    SelfToTargetOnSelfForward,
};

