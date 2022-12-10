#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineIndicatorDisplayProperties.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FReplayTimelineIndicatorDisplayProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* m_TimeDilationIndicatorPositionRemappingCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fIndicatorsAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fIndicatorsHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fIndicatorsFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAntiAlias;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fIndicatorsThickness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTransitionThickness;
    
    SIFU_API FReplayTimelineIndicatorDisplayProperties();
};

