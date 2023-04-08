#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "SCPoolableActorComponent.h"
#include "EDangerStates.h"
#include "HitDescription.h"
#include "HitRequest.h"
#include "Templates/SubclassOf.h"
#include "HitComponent.generated.h"

class UCurveFloat;
class UHitAnimRequest;
class UHittedDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHitComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHittedDynamicDelegate, const FHitDescription&, HitDescription);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedDynamicDelegate OnHitDetection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_RequiredHitBoxTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_IgnoreHitBoxTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCriticalHitEvenOnResilience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageMultiplierCriticalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardDamageMultiplierCriticalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStunTimeMultiplierCriticalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAdditionnalFreezeFramesCriticalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFreezeFramesLethalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DefaultKnockBackDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedTrackingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedTrackingMaxAngleFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedFrozenPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedFrontQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLowHeightDiffCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHighHeightDiffCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHittedDB* m_HittedDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBrokenGuardDisarmCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmGaugeRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmGaugeRegenRateWhileHoldingWeapon;
    
public:
    UHitComponent();
    UFUNCTION(BlueprintCallable)
    void OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleInfiniteDamageOnHit(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetStructureOnly(bool _bUseStructureOnly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetHitAnimRequestToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideHitAnimRequest(TSubclassOf<UHitAnimRequest> _hitAnimRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer BPF_GetTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHittedDB* BPF_GetHittedDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHitAnimRequest* BPF_GetHitAnimRequest() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GenerateFakeImpact(const FHitResult& _hitResult, const FHitRequest& _inHitRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_ValidateHit(const FHitResult& _hitResult, const FHitRequest& _inHitRequest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHit(const FHitDescription& _description);
    
    
    // Fix for true pure virtual functions not being implemented
};

