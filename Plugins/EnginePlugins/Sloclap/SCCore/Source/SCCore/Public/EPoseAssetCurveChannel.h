#pragma once
#include "CoreMinimal.h"
#include "EPoseAssetCurveChannel.generated.h"

UENUM(BlueprintType)
enum class EPoseAssetCurveChannel : uint8 {
    LipSynch,
    AnimNotify,
    Default,
    Count,
};

