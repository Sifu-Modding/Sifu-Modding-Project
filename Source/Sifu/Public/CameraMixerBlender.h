#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraMixerBlender.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraMixerBlender : public UObject {
    GENERATED_BODY()
public:
    UCameraMixerBlender();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_EvaluateBlendRatio(UCameraComponentThird* _camera, float _fDt, float _fOldRatio, bool _bNoDamping) const;
    
};

