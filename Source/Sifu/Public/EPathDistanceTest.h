#pragma once
#include "CoreMinimal.h"
#include "EPathDistanceTest.generated.h"

UENUM()
enum class EPathDistanceTest {
    PathDistance_DeathPosition,
    PathDistance_Position,
    PathDistance_Weapon,
    PathDistance_CombatRole,
    PathDistance_MAX UMETA(Hidden),
};

