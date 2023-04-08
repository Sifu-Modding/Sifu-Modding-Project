#pragma once
#include "CoreMinimal.h"
#include "ESanctuaryCharacterStatus.generated.h"

UENUM(BlueprintType)
enum class ESanctuaryCharacterStatus : uint8 {
    None,
    FrozenBySanctuary,
    AssignedToSanctuary,
};

