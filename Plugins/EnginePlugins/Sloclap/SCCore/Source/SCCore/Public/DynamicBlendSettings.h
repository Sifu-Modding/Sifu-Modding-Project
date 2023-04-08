#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "DynamicBlendSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDynamicBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption m_eBlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_customCurve;
    
    SCCORE_API FDynamicBlendSettings();
};

