#pragma once
#include "CoreMinimal.h"
#include "ESCBlendType.h"
#include "CameraMixerBlender.h"
#include "OverTimeCameraMixerBlender.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class SIFU_API UOverTimeCameraMixerBlender : public UCameraMixerBlender {
    GENERATED_BODY()
public:
    UOverTimeCameraMixerBlender();
protected:
    UFUNCTION(BlueprintPure)
    float GetCoeff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BlendWithStarting(float _fTarget, float _fDelay, float _fStarting, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Blend(float _fTarget, float _fDelay, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) const;
    
};

