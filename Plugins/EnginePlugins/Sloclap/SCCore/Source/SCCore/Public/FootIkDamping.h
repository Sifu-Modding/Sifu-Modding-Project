#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "FootIkDamping.generated.h"

USTRUCT(BlueprintType)
struct FFootIkDamping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlantedFootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_curveByRelFootPos;
    
public:
    SCCORE_API FFootIkDamping();
};

