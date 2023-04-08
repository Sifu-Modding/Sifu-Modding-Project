#pragma once
#include "CoreMinimal.h"
#include "EDeadZoneTypes.generated.h"

UENUM(BlueprintType)
enum class EDeadZoneTypes : uint8 {
    Collision,
    CharacterOcclusion,
    Merged,
};

