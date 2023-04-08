#pragma once
#include "CoreMinimal.h"
#include "EAIInfluenceTest.generated.h"

UENUM(BlueprintType)
enum class EAIInfluenceTest : uint8 {
    Superior,
    Inferior,
    Range,
    Match,
};

