#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "SCGameplayAbilityActorInfo.h"
#include "DizzyReductionAbility.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UDizzyReductionAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TimeReductionAsPercentCurve;
    
public:
    UDizzyReductionAbility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDizzyReduction(const FSCGameplayAbilityActorInfo& _infos, float _fTimeLeft, float _fTimeReduced);
    
};

