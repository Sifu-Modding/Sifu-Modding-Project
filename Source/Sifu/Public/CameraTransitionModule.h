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

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStop(UCameraComponentThird* _cameraComponent, float _fTimeElapsed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStart(UCameraComponentThird* _cameraComponent, float _fDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnProcess(UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fOldBlendRatio, float _fNewBlendRatio) const;
    
};

