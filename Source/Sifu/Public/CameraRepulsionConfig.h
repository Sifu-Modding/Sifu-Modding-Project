#pragma once
#include "CoreMinimal.h"
#include "CameraRepulsionConfigElement.h"
#include "CameraRepulsionConfig.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraRepulsionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRepulsionSleepTimerAfterManualCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraRepulsionConfigElement> m_RepulsionsElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeadZoneHidingTargetPositionSpringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCollidingDeadZoneExtraAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookAtYawDampingValueThisFrameToDisableRepulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCollisionRailRatioToActivateRepulsionFromCollidingDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseMergedDeadZonesWhenRepulsingFromOnlyHidingZone;
    
    FCameraRepulsionConfig();
};

