#pragma once
#include "CoreMinimal.h"
#include "EPendingGenerationTaskToLaunch.generated.h"

UENUM(BlueprintType)
enum class EPendingGenerationTaskToLaunch : uint8 {
    None,
    CreateCandidates,
    GenerationTaskAroundEnemyIfNeeded,
};

