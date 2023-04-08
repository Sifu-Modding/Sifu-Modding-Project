#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "AvailabilityLayerWindow.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct FAvailabilityLayerWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiHitConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_Layer;
    
    SIFU_API FAvailabilityLayerWindow();
};

