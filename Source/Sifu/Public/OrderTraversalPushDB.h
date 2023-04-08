#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "OrderDB.h"
#include "OrderTraversalPushDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderTraversalPushDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMarginAfterTraversalEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitOnLandedWithoutFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitOnLethalFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxLandingDistanceFromNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFallVelocityVariation;
    
    UOrderTraversalPushDB();
};

