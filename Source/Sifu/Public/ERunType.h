#pragma once
#include "CoreMinimal.h"
#include "ERunType.generated.h"

UENUM(BlueprintType)
enum class ERunType : uint8 {
    Vanilla,
    ModifiersOnly,
    CheatsOnly,
    CheatsAndModifiers,
};

