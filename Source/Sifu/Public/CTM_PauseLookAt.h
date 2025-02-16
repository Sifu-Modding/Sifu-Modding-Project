#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionModule.h"
#include "CTM_PauseLookAt.generated.h"

class UCameraComponentThird;

UCLASS(Blueprintable)
class SIFU_API UCTM_PauseLookAt : public UCameraTransitionModule {
    GENERATED_BODY()
public:
    UCTM_PauseLookAt();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_CanLaunchPauseLookAt(UCameraComponentThird* _cameraComponent) const;
    
};

