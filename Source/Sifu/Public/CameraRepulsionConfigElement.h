#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetConditionInstance.h"
#include "CameraRepulsionConfigElement.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraRepulsionConfigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorTargetConditionInstance> m_ActorTargetConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RepulsionSpringValuePerCameraRailCollisionRatio;
    
    FCameraRepulsionConfigElement();
};

