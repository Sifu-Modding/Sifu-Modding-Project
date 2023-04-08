#pragma once
#include "CoreMinimal.h"
#include "ECaptureInputStep.generated.h"

UENUM(BlueprintType)
enum class ECaptureInputStep : uint8 {
    ActionStep,
    AxisXLeftStep,
    AxisXRightStep,
    AxisYUpStep,
    AxisYDownStep,
    Count,
};

