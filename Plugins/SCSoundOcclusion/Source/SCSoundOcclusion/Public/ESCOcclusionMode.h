#pragma once
#include "CoreMinimal.h"
#include "ESCOcclusionMode.generated.h"

UENUM(BlueprintType)
enum class ESCOcclusionMode : uint8 {
    Generic,
    RTPC,
};

