#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AnimContainer.h"
#include "ESCCardinalPoints.h"
#include "AutoAvoidInfos.h"
#include "HitBox.h"
#include "SCGameplayAbility.h"
#include "SCGameplayAbilityActorInfo.h"
#include "AvoidAbility.generated.h"

class AActor;
class UAbilityPayload;

UCLASS(Blueprintable)
class SIFU_API UAvoidAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UAvoidAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAutoAvoidInfos BPF_GetAutoAvoidInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void BPE_GetAvoidAnimationsBis(AActor* _forActor, AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
};

