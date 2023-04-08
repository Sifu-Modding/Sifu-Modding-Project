#pragma once
#include "CoreMinimal.h"
#include "EWallDetectionStep.generated.h"

UENUM(BlueprintType)
enum class EWallDetectionStep : uint8 {
    Inactive,
    WaitingForDepthRaycast1,
    WaitingForDepthRaycast2,
    WaitingForLengthRaycast,
    Done,
};

