#pragma once
#include "CoreMinimal.h"
#include "EThreateningEnemyAction.generated.h"

UENUM(BlueprintType)
enum class EThreateningEnemyAction : uint8 {
    Attack,
    Traversal,
    Rush,
    Flee,
    PickUpWeapon,
    TooClose,
};

