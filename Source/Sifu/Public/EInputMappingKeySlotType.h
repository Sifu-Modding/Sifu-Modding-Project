#pragma once
#include "CoreMinimal.h"
#include "EInputMappingKeySlotType.generated.h"

UENUM(BlueprintType)
enum class EInputMappingKeySlotType : uint8 {
    Action,
    HorAxis,
    VertAxit,
};

