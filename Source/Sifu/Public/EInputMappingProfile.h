#pragma once
#include "CoreMinimal.h"
#include "EInputMappingProfile.generated.h"

UENUM(BlueprintType)
enum class EInputMappingProfile : uint8 {
    DefaultGamepad,
    DefaultKeyboard,
    CustomGamepad,
    CustomKeyboard,
};

