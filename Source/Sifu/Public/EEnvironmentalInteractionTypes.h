#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentalInteractionTypes.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentalInteractionTypes : uint8 {
    None,
    Takedown,
    Push,
    Count,
};

