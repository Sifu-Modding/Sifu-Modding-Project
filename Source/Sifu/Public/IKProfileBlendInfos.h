#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "IKProfileBlendInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FIKProfileBlendInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValueCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> m_eBlendInFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> m_eBlendOutFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CurveName;
    
    FIKProfileBlendInfos();
};

