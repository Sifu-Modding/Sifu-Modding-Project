#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "AnimContainer.h"
#include "OrderDB.h"
#include "Templates/SubclassOf.h"
#include "OrderFallOnSlopeEntryDB.generated.h"

class UDetectFallOrderService;

UCLASS(Blueprintable)
class SIFU_API UOrderFallOnSlopeEntryDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_OnHitSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_VelocityBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceVelocityOnPlaneGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceVelocityOnPlaneGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDetectFallOrderService> m_SlopeDetectionDB;
    
    UOrderFallOnSlopeEntryDB();
};

