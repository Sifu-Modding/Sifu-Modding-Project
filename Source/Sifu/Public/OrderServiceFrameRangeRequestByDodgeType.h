#pragma once
#include "CoreMinimal.h"
#include "OrderServiceFrameRangeRequest.h"
#include "UObject/NoExportTypes.h"
#include "OrderServiceFrameRangeRequestByDodgeType.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequestByDodgeType : public UOrderServiceFrameRangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_frameRanges[3];
    
    UOrderServiceFrameRangeRequestByDodgeType();
};

