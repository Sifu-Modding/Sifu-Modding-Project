#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OrderServiceFrameRange.generated.h"

class UOrderServiceFrameRangeRequest;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBoundToAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderServiceFrameRangeRequest* m_FrameRangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_FrameRange;
    
    FOrderServiceFrameRange();
};

