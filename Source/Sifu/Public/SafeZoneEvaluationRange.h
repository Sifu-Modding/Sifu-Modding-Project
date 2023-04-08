#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "SafeZoneEvaluationRange.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USafeZoneEvaluationRange : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    USafeZoneEvaluationRange();
};

