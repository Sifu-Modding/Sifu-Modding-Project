#pragma once
#include "CoreMinimal.h"
#include "AngleRange.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAngleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngleSize;
    
    FAngleRange();
};

