#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraLookAtServiceBehaviorConfig.h"
#include "CameraLookAtServiceBehaviorTime.h"
#include "ELookAtType.h"
#include "CameraLookAtServiceBehavior.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FCameraLookAtServiceBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtType m_eLookATType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLookAtServiceBehaviorTime m_timeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLookAtServiceBehaviorConfig m_configParams;
    
    FCameraLookAtServiceBehavior();
};

