#pragma once
#include "CoreMinimal.h"
#include "ELocomotionRotationType.h"
#include "LocomotionRotationParams.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionRotationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocomotionRotationType m_eRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSnapDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLerpFactor;
    
    SIFU_API FLocomotionRotationParams();
};

