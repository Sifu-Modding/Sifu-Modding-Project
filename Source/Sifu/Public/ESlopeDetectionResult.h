#pragma once
#include "CoreMinimal.h"
#include "ESlopeDetectionResult.generated.h"

UENUM(BlueprintType)
enum class ESlopeDetectionResult : uint8 {
    OnSlopeDescending,
    OnSlopeAscending,
    OnPlaneGround,
    CouldNotBeTested,
};

