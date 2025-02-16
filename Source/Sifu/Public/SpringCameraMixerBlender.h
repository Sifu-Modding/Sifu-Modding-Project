#pragma once
#include "CoreMinimal.h"
#include "CameraMixerBlender.h"
#include "SpringCameraMixerBlender.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API USpringCameraMixerBlender : public UCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedFactor;
    
public:
    USpringCameraMixerBlender();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetTargetRatio(UCameraComponentThird* _camera) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetSpeedFactor(UCameraComponentThird* _camera, float _fTargetRatio, float _fOldRatio) const;
    
};

