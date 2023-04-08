#pragma once
#include "CoreMinimal.h"
#include "ECaptureControllerTypes.generated.h"

UENUM(BlueprintType)
enum class ECaptureControllerTypes : uint8 {
    None,
    Gamepad,
    Keyboard,
    Count,
};

