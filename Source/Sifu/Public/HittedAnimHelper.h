#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimContainer.h"
#include "HittedAnimContainer.h"
#include "ImpactResult.h"
#include "OrderType.h"
#include "Templates/SubclassOf.h"
#include "HittedAnimHelper.generated.h"

class UOrderHittedGenericDB;

UCLASS(Blueprintable)
class SIFU_API UHittedAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHittedAnimHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_MakeGenericHitAnimWithOrderType(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, const FOrderType& _OrderType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_MakeGenericHitAnim(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, TSubclassOf<UOrderHittedGenericDB> _order);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetHitAnimDuration(const FHittedAnimContainer& _animContainer, const FImpactResult& _Impact);
    
};

