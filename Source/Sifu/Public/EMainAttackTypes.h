#pragma once
#include "CoreMinimal.h"
#include "EMainAttackTypes.generated.h"

UENUM(BlueprintType)
enum class EMainAttackTypes : uint8 {
    Light,
    Heavy,
    Count,
    None,
};

