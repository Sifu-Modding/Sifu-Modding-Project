#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPOrderServiceInstance.h"
#include "EOrderType.h"
#include "OrderService.h"
#include "AttackTrackingOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAttackTrackingOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceTrackingFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwaysTrackHittedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsTrackingWindowOpenedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsRushAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDisplacementDirAsAttackDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_StopTrackingIfTargetPlaysOrder;
    
    UAttackTrackingOrderService();
    UFUNCTION(BlueprintCallable)
    void BPF_GetTrackingLocation(const FBPOrderServiceInstance& _instance, bool& _bSuccess, FVector& _value);
    
};

