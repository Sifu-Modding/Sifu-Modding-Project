#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "HitBox.h"
#include "GameplayTagContainer.h"
#include "ImpactResult.h"
#include "EALBinaryOperation.h"
#include "InputAction.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "GuardAbility.generated.h"

class AFightingCharacter;

UCLASS()
class SIFU_API UGuardAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHitBox m_StructureBrokenHit;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_ParryDizzyHit;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_TakedownTags;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableNewGuard;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableDeflectInterruptOnDeflectNonInterrupt;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysShowParry;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eForceGuardALBinaryOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iForceGuardALBinaryPriority;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ParryGrabRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ParryPickupRequiredTags;
    
    UPROPERTY(EditAnywhere)
    TArray<InputAction> m_HoldToggleResetOnGuardLost;
    
    UGuardAbility();
    UFUNCTION(BlueprintPure)
    bool BPF_CanActivateTakedown(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanActivateParryGrab(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSlowmoActivable(bool _bActivable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParryPickup(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FHitRequest& _request);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGuardInputPressChange(bool _bPressed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDefense(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FImpactResult& _Impact, const FHitRequest& _request);
    
};

