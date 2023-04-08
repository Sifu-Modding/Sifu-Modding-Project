#pragma once
#include "CoreMinimal.h"
#include "EPathDistanceTest.generated.h"

UENUM(BlueprintType)
enum class EPathDistanceTest : uint8 {
    PathDistance_DeathPosition,
    PathDistance_Position,
    PathDistance_Weapon,
    PathDistance_CombatRole,
    PathDistance_MAX UMETA(Hidden),
};

