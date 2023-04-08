#pragma once
#include "CoreMinimal.h"
#include "EReplayableDestructibleState.generated.h"

UENUM(BlueprintType)
enum class EReplayableDestructibleState : uint8 {
    Unspawned,
    Spawned,
    Destroyed,
};

