#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraMeshFading.h"
#include "EReplayKeyTransition.h"
#include "EReplayKeyCameraMode.h"
#include "ReplayKeyDataCameraTransitionOverrideSettings.h"
#include "UObject/NoExportTypes.h"
#include "ReplayKeyDataCameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "ReplayKeyCutData.h"
#include "ReplayKeyScreenFading.h"
#include "ReplayKeyData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    int32 m_iKeyIndex;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    int32 m_iKeyFrameIndex;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fTime;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    float m_fDilatedTime;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fTimeDilation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_eTypeFlags;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyTransition m_eTransition;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCameraMeshFading m_eCameraMeshFading;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vCameraLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat m_qCameraRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraTransitionOverrideSettings m_CameraTransformSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraSettings m_CameraSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyCutData m_CutData;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyScreenFading m_ScreenFading;
    
    SIFU_API FReplayKeyData();
};

