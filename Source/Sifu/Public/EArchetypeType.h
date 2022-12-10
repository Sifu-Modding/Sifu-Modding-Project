#pragma once
#include "CoreMinimal.h"
#include "EArchetypeType.generated.h"

UENUM()
enum class EArchetypeType : uint8 {
    Default,
    Weaker,
    Stronger,
};

