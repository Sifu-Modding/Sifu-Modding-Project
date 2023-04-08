#pragma once
#include "CoreMinimal.h"
#include "EAIMemoryAttackType.generated.h"

UENUM(BlueprintType)
enum class EAIMemoryAttackType : uint8 {
    AttackLaunched,
    AttackReceived,
};

