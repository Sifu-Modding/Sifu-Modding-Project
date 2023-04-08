#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceContext.generated.h"

UENUM(BlueprintType)
enum class EAIConditionTraceContext : uint8 {
    Instigator,
    Target,
};

