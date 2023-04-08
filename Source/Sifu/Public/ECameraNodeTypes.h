#pragma once
#include "CoreMinimal.h"
#include "ECameraNodeTypes.generated.h"

UENUM(BlueprintType)
enum class ECameraNodeTypes : uint8 {
    CameraNode,
    CameraNodeBlender,
    CameraMixerNode,
    AnimDrivenCameraNode,
    Count,
};

