#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SafeZoneOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USafeZoneOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iMaxIterations;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseTargetSnapToBlend;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ClampZone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ZoneAnimFrameRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector m_vNavMeshExtraZone;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAdditionnalSpaceToTakeFromAnim;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetBone;
    
    USafeZoneOrderService();
};

