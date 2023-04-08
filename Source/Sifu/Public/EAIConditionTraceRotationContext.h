#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceRotationContext.generated.h"

UENUM(BlueprintType)
enum class EAIConditionTraceRotationContext : uint8 {
    Instigator,
    Target,
    Identity,
};

