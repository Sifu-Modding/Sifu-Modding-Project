#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderDB.h"
#include "AnimContainer.h"
#include "Curves/CurveFloat.h"
#include "OrderFallOnSlopeEntryDB.generated.h"

class UDetectFallOrderService;

UCLASS()
class SIFU_API UOrderFallOnSlopeEntryDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_OnHitSlope;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_VelocityBlendRatio;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_fForceVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceVelocityOnPlaneGround;
    
    UPROPERTY(EditAnywhere)
    float m_fForceVelocityOnPlaneGround;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDetectFallOrderService> m_SlopeDetectionDB;
    
    UOrderFallOnSlopeEntryDB();
};

