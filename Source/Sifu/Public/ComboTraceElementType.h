#pragma once
#include "CoreMinimal.h"
#include "ComboTraceElementType.generated.h"

UENUM(BlueprintType)
enum class ComboTraceElementType : uint8 {
    NodeRoot,
    NodeAttack,
    NodeRedirect,
    Condition,
    ProbaTransition,
    Conduit,
    None,
};

