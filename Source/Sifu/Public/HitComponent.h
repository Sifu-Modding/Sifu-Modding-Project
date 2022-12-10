#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitDescription.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "GameplayTagContainer.h"
#include "EDangerStates.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "HitComponent.generated.h"

class UCurveFloat;
class UHittedDB;
class UHitAnimRequest;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHitComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHittedDynamicDelegate, const FHitDescription&, HitDescription);
    
    UPROPERTY(BlueprintAssignable)
    FHittedDynamicDelegate OnHitDetection;
    
private:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditAnywhere)
    float m_fHitStrength;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_Tags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_RequiredHitBoxTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_IgnoreHitBoxTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCriticalHitEvenOnResilience;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDamageMultiplierCriticalHit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGuardDamageMultiplierCriticalHit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStunTimeMultiplierCriticalHit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iAdditionnalFreezeFramesCriticalHit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iFreezeFramesLethalHit;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DefaultKnockBackDynamic;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedTrackingDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedTrackingMaxAngleFromTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedFrozenPlayRate;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedFrontQuadrant;
    
    UPROPERTY(EditAnywhere)
    float m_fLowHeightDiffCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(EditAnywhere)
    float m_fHighHeightDiffCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(EditAnywhere)
    UHittedDB* m_HittedDB;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBrokenGuardDisarmCoef;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisarmGaugeRegenRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisarmGaugeRegenRateWhileHoldingWeapon;
    
public:
    UHitComponent();
    UFUNCTION()
    void OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleInfiniteDamageOnHit(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetStructureOnly(bool _bUseStructureOnly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetHitAnimRequestToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideHitAnimRequest(TSubclassOf<UHitAnimRequest> _hitAnimRequest);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer BPF_GetTags() const;
    
    UFUNCTION(BlueprintPure)
    UHittedDB* BPF_GetHittedDB() const;
    
    UFUNCTION(BlueprintPure)
    UHitAnimRequest* BPF_GetHitAnimRequest() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GenerateFakeImpact(const FHitResult& _hitResult, const FHitRequest& _inHitRequest);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_ValidateHit(const FHitResult& _hitResult, const FHitRequest& _inHitRequest) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHit(const FHitDescription& _description);
    
    
    // Fix for true pure virtual functions not being implemented
};

