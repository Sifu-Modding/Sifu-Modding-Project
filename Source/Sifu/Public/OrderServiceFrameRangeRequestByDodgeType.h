#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OrderServiceFrameRangeRequest.h"
#include "OrderServiceFrameRangeRequestByDodgeType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequestByDodgeType : public UOrderServiceFrameRangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_frameRanges[3];
    
    UOrderServiceFrameRangeRequestByDodgeType();
};

