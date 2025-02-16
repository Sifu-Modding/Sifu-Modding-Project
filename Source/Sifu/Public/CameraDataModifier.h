#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraDataModifier.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraDataModifier : public UObject {
    GENERATED_BODY()
public:
    UCameraDataModifier();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReceiveOnStop(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReceiveOnStart(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReceiveOnProcess(UCameraComponentThird* _cameraComponent, float _fDt) const;
    
};

