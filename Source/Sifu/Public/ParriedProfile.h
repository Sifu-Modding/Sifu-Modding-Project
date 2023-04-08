#pragma once
#include "CoreMinimal.h"
#include "ESCBlendType.h"
#include "ParriedProfile.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FParriedProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParriedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eParriedReorientationBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ParriedReorientationCurve;
    
    SIFU_API FParriedProfile();
};

