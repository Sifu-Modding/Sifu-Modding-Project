#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbilityActorInfo.h"
#include "AnimContainer.h"
#include "SCGameplayAbility.h"
#include "HitBox.h"
#include "ESCCardinalPoints.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AvoidAbility.generated.h"

class UAbilityPayload;
class AActor;

UCLASS()
class SIFU_API UAvoidAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UAvoidAbility();
    UFUNCTION(BlueprintImplementableEvent)
    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void BPE_GetAvoidAnimationsBis(AActor* _forActor, AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
};

