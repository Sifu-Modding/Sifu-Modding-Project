#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FrameRange.generated.h"

USTRUCT(BlueprintType)
struct FFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_Anim;
    
    SIFU_API FFrameRange();
};

