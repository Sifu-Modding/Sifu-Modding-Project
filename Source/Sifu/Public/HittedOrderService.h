#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "Engine/EngineTypes.h"
#include "AnimContainer.h"
#include "BPOrderServiceInstance.h"
#include "EOrderType.h"
#include "HitBox.h"
#include "HitRequest.h"
#include "HittedAnimContainer.h"
#include "HittedServiceInfos.h"
#include "OrderService.h"
#include "HittedOrderService.generated.h"

class UAttackPropertiesResistanceDB;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UHittedOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedServiceInfos m_Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFreezeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eInstigatorOrderType;
    
    UHittedOrderService();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UAttackPropertiesResistanceDB* BPE_GetSpecialResistanceDB(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FHittedAnimContainer BPE_GetLethalHittedAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitRequest(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateRecoveryAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

