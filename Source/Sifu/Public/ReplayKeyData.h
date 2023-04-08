#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EReplayKeyCameraMeshFading.h"
#include "EReplayKeyCameraMode.h"
#include "EReplayKeyTransition.h"
#include "ReplayKeyCutData.h"
#include "ReplayKeyDataCameraSettings.h"
#include "ReplayKeyDataCameraTransitionOverrideSettings.h"
#include "ReplayKeyScreenFading.h"
#include "ReplayKeyData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 m_iKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 m_iKeyFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    float m_fDilatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyTransition m_eTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyCameraMeshFading m_eCameraMeshFading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat m_qCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataCameraTransitionOverrideSettings m_CameraTransformSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataCameraSettings m_CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyCutData m_CutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyScreenFading m_ScreenFading;
    
    SIFU_API FReplayKeyData();
};

