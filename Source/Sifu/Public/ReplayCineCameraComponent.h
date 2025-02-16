#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "ReplayKeyDataCameraSettings.h"
#include "ReplayCineCameraComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup = Custom, Config = Replay, meta = (BlueprintSpawnableComponent))
class SIFU_API UReplayCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
        float m_fZoomSpeed;

    UPROPERTY(EditDefaultsOnly)
        UCurveFloat* m_ZoomSpeedCurve;

    UReplayCineCameraComponent();
    UFUNCTION(BlueprintPure)
        FReplayKeyDataCameraSettings BPF_GetCameraSettings() const;

    UFUNCTION(BlueprintCallable)
        void BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings);

};

