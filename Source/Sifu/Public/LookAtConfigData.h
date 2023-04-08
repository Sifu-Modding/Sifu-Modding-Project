#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
#include "EMoveStatus.h"
#include "ESpeedState.h"
#include "LookAtModifierParams.h"
#include "LookAtConfigData.generated.h"

UCLASS(Blueprintable)
class SIFU_API ULookAtConfigData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRequiredYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRequiredPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eMaxSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eNeededMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimerBeforeLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtModifierParams m_modifierParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxClampedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxClampedPitch;
    
    ULookAtConfigData();
};

