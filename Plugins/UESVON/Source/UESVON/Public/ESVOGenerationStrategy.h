#pragma once
#include "CoreMinimal.h"
#include "ESVOGenerationStrategy.generated.h"

UENUM(BlueprintType)
enum class ESVOGenerationStrategy : uint8 {
    UseBaked,
    GenerateOnBeginPlay,
};

