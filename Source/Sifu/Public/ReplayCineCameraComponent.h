#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "ReplayKeyDataCameraSettings.h"
#include "ReplayCineCameraComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Replay, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ZoomSpeedCurve;
    
    UReplayCineCameraComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReplayKeyDataCameraSettings BPF_GetCameraSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings);
    
};

