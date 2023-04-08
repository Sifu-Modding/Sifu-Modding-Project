#pragma once
#include "CoreMinimal.h"
#include "EArchetypeType.generated.h"

UENUM(BlueprintType)
enum class EArchetypeType : uint8 {
    Default,
    Weaker,
    Stronger,
};

