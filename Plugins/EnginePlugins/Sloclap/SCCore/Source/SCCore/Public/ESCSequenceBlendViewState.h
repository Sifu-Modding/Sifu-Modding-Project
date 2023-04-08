#pragma once
#include "CoreMinimal.h"
#include "ESCSequenceBlendViewState.generated.h"

UENUM(BlueprintType)
enum class ESCSequenceBlendViewState : uint8 {
    ToSequence,
    Sequence,
    ToPlayer,
    None,
};

