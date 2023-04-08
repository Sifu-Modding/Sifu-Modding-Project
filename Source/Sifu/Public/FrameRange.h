#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FrameRange.generated.h"

USTRUCT(BlueprintType)
struct FFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_Anim;
    
    SIFU_API FFrameRange();
};

