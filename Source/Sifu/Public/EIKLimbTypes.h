#pragma once
#include "CoreMinimal.h"
#include "EIKLimbTypes.generated.h"

UENUM(BlueprintType)
enum class EIKLimbTypes : uint8 {
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
    Head,
    Count,
};

