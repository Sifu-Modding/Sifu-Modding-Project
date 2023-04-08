#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfo.h"
#include "TraversalCameraTransitionInfo.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTraversalCameraTransitionInfo : public UCameraTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyCurveToDynamicRatio;
    
    UTraversalCameraTransitionInfo();
};

