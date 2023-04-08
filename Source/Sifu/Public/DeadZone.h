#pragma once
#include "CoreMinimal.h"
#include "AngleRange.h"
#include "DeadZone.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDeadZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAngleRange m_angleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistance;
    
    FDeadZone();
};

