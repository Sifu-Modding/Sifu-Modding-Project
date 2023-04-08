#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfo.h"
#include "BlendInLockCameraTransitionInfo.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBlendInLockCameraTransitionInfo : public UCameraTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDefaultTargetReachDurationAsFallback;
    
    UBlendInLockCameraTransitionInfo();
};

