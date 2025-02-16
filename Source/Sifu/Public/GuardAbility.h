#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EALBinaryOperation.h"
#include "HitBox.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "InputAction.h"
#include "SCGameplayAbility.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "GuardAbility.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UGuardAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_StructureBrokenHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_ParryDizzyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_TakedownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableNewGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDeflectInterruptOnDeflectNonInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwaysShowParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eForceGuardALBinaryOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iForceGuardALBinaryPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_ParryGrabRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_ParryPickupRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_HoldToggleResetOnGuardLost;
    
    UGuardAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanActivateTakedown(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanActivateParryGrab(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlowmoActivable(bool _bActivable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnParryPickup(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FHitRequest& _request);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGuardInputPressChange(bool _bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDefense(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FImpactResult& _Impact, const FHitRequest& _request);
    
};

