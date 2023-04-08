#pragma once
#include "CoreMinimal.h"
#include "ESequenceBindingType.generated.h"

UENUM(BlueprintType)
enum class ESequenceBindingType : uint8 {
    CharacterOwnerPelvisLocation,
    CharacterOwnerLocation,
};

