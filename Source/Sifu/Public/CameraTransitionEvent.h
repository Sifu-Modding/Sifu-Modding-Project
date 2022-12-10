#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraTransitionEvent.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraTransitionEvent : public UObject {
    GENERATED_BODY()
public:
    UCameraTransitionEvent();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveLaunchEvent(UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fBlendRatio) const;
    
};

