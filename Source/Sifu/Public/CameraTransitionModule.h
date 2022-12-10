#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraTransitionModule.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraTransitionModule : public UObject {
    GENERATED_BODY()
public:
    UCameraTransitionModule();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnStop(UCameraComponentThird* _cameraComponent, float _fTimeElapsed) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnStart(UCameraComponentThird* _cameraComponent, float _fDuration) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnProcess(UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fOldBlendRatio, float _fNewBlendRatio) const;
    
};

