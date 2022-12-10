#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIRangePerCircleIndex.generated.h"

USTRUCT(BlueprintType)
struct FAIRangePerCircleIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<int32, FFloatRange> m_RangePerCircle;
    
    SIFU_API FAIRangePerCircleIndex();
};

