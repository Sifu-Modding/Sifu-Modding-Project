#pragma once
#include "CoreMinimal.h"
#include "ESCBlendType.h"
#include "ECameraMirrorManagementType.h"
#include "CameraMirrorManagementConfig.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraMirrorManagementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraMirrorManagementType m_eMirrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInstantSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eBlenderBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_BlenderCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlenderDuration;
    
    FCameraMirrorManagementConfig();
};

