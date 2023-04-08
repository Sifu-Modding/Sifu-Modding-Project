#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "ESpeedState.h"
#include "ETransitionRotation.h"
#include "TransitionRequest.generated.h"

USTRUCT(BlueprintType)
struct FTransitionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eInSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eInCardinalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eOutSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eOutCardinalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionRotation m_eVelocityRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAbsVelocityAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsRotationLeft;
    
    SIFU_API FTransitionRequest();
};

