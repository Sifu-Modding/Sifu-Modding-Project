#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraTransitionModule.h"
#include "CTM_LookAt.generated.h"

class UCameraComponentThird;

UCLASS(Blueprintable)
class SIFU_API UCTM_LookAt : public UCameraTransitionModule {
    GENERATED_BODY()
public:
    UCTM_LookAt();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BPE_GetPositionToLook(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_CanLaunchLookAt(UCameraComponentThird* _cameraComponent) const;
    
};

