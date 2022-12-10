#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
#include "ESCCardinalPoints.h"
#include "Curves/CurveFloat.h"
#include "HitBox.h"
#include "SCUserDefinedEnumHandler.h"
#include "ESpeedState.h"
#include "HittedAnimContainer.h"
#include "UObject/NoExportTypes.h"
#include "HandleLDCollisionOrderService.generated.h"

class ACharacter;

UCLASS(EditInlineNew)
class SIFU_API UHandleLDCollisionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetHitboxDelegateTest, const FBPOrderServiceInstance&, _orderServiceInstance);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetHitboxDelegate, const FBPOrderServiceInstance&, _orderServiceInstance, FHitBox&, _hitbox);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHandleHittedByEnvironment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    
    UPROPERTY(EditAnywhere)
    bool m_bWallHitMinAngleDegUseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve m_WallHitMinAngleDegOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fWallHitMinAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fWallHitMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInverseOrientationOnHit;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomWallHit;
    
    UPROPERTY(EditAnywhere)
    bool m_bBlockedByTarget;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_CustomWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bActivateHitbox;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreHitOnTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomHitbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fActivateHitboxMinVelocity;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_CustomHitBox;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_SelfHitOnCollisionWithCharacter;
    
    UPROPERTY(EditAnywhere)
    bool m_bDetectTraversal;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectTraversalDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fTraversalDetectionDistance;
    
    UPROPERTY(EditAnywhere)
    ESCCardinalPoints m_eTraversalCardinal;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eTraversalSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bSetTargetAsOwningChar;
    
    UHandleLDCollisionOrderService();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCollisionWithCharacter(const FBPOrderServiceInstance& _orderServiceInstance, ACharacter* _otherChara) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FHittedAnimContainer BPE_GetHittedAnimContainer(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetDirection(const FBPOrderServiceInstance& _orderServiceInstance, FVector& _vOutDir) const;
    
};

