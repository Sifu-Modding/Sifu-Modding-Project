#pragma once
#include "CoreMinimal.h"
#include "CameraDataModifier.h"
#include "ECameraTrackingMode.h"
#include "CDM_SwitchCameraTrackingMode.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UCDM_SwitchCameraTrackingMode : public UCameraDataModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraTrackingMode m_eCameraTrackingModeTranslationIn;
    
public:
    UCDM_SwitchCameraTrackingMode();
};

