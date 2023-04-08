#pragma once
#include "CoreMinimal.h"
#include "EHitTypeDetected.generated.h"

UENUM(BlueprintType)
enum class EHitTypeDetected : uint8 {
    AnyHit,
    HitNotDismissed,
    NoHit,
};

