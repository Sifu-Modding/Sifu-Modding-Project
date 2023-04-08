#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESCCardinalPoints.h"
#include "SCUserDefinedEnumHandler.h"
#include "BPOrderServiceInstance.h"
#include "ESpeedState.h"
#include "HitBox.h"
#include "HittedAnimContainer.h"
#include "OrderService.h"
#include "HandleLDCollisionOrderService.generated.h"

class ACharacter;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UHandleLDCollisionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetHitboxDelegateTest, const FBPOrderServiceInstance&, _orderServiceInstance);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetHitboxDelegate, const FBPOrderServiceInstance&, _orderServiceInstance, FHitBox&, _hitbox);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHandleHittedByEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWallHitMinAngleDegUseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_WallHitMinAngleDegOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWallHitMinAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWallHitMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverseOrientationOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockedByTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_CustomWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateHitbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreHitOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomHitbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActivateHitboxMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_CustomHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_SelfHitOnCollisionWithCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDetectTraversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDetectTraversalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eTraversalCardinal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eTraversalSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetTargetAsOwningChar;
    
    UHandleLDCollisionOrderService();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCollisionWithCharacter(const FBPOrderServiceInstance& _orderServiceInstance, ACharacter* _otherChara) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FHittedAnimContainer BPE_GetHittedAnimContainer(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetDirection(const FBPOrderServiceInstance& _orderServiceInstance, FVector& _vOutDir) const;
    
};

