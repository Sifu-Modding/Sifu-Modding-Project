#pragma once
#include "CoreMinimal.h"
#include "EFallHitOrigin.generated.h"

UENUM(BlueprintType)
enum class EFallHitOrigin : uint8 {
    FromPush,
    FromFall,
};

