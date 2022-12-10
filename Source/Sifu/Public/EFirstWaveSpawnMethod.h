#pragma once
#include "CoreMinimal.h"
#include "EFirstWaveSpawnMethod.generated.h"

UENUM()
enum class EFirstWaveSpawnMethod : uint8 {
    BeginPlay,
    OnEnemyEntersVolume,
    Manually,
};

