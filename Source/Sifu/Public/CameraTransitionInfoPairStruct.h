#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfoPairStruct.generated.h"

class UAbstractCameraData;
class UCameraTransitionInfo;

USTRUCT(BlueprintType)
struct SIFU_API FCameraTransitionInfoPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbstractCameraData* m_CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraTransitionInfo* m_CameraTransitionInfo;
    
    FCameraTransitionInfoPairStruct();
};

