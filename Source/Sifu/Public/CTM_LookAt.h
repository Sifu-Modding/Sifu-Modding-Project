#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionModule.h"
#include "UObject/NoExportTypes.h"
#include "CTM_LookAt.generated.h"

class UCameraComponentThird;

UCLASS()
class SIFU_API UCTM_LookAt : public UCameraTransitionModule {
    GENERATED_BODY()
public:
    UCTM_LookAt();
    UFUNCTION(BlueprintNativeEvent)
    FVector BPE_GetPositionToLook(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanLaunchLookAt(UCameraComponentThird* _cameraComponent) const;
    
};

