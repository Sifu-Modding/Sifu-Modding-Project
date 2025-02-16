#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "HitBox.h"
#include "HitDescription.h"
#include "HittedAnimContainer.h"
#include "OrderService.h"
#include "ParryToHitOrderService.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UParryToHitOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreezeFrames;
    
    UParryToHitOrderService();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetParryAnimations(const FHitDescription& _hitDescription, AFightingCharacter* _parriyer, FAnimContainer& _outParryierAnim, FHittedAnimContainer& _outParriedAnim) const;
    
};

