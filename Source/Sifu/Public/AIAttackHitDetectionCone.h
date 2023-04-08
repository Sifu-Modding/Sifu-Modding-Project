#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIAttackHitDetectionCone.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackHitDetectionCone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngle;
    
    SIFU_API FAIAttackHitDetectionCone();
};

