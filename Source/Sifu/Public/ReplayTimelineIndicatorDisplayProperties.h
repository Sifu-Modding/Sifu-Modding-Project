#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineIndicatorDisplayProperties.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FReplayTimelineIndicatorDisplayProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TimeDilationIndicatorWidthPerDilationValueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIndicatorsAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIndicatorsHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAntiAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIndicatorsThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTransitionThickness;
    
    SIFU_API FReplayTimelineIndicatorDisplayProperties();
};

