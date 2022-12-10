#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "EDownState.h"
#include "CharacterHealthComponent.generated.h"

class UCharacterHealthComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownStateChanged, UCharacterHealthComponent*, _healhComponent, EDownState, _state);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGhostDamageLost);
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bCanRecoverHealth;
    
    UPROPERTY(BlueprintAssignable)
    FGhostDamageLost OnGhostDamageLost;
    
    UPROPERTY(BlueprintAssignable)
    FOnDownStateChanged OnDownStateChange;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fMaxHealthMultiplier[3];
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryRate;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryCooldownInit;
    
    UPROPERTY(EditAnywhere)
    float m_fGhostDamageRecoveryRate;
    
    UPROPERTY(Replicated, Transient)
    float m_fGhostDamage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRepSetIsDown)
    bool m_bIsDown;
    
    UPROPERTY(Replicated, Transient)
    EDownState m_eDownState;
    
    UPROPERTY(Replicated, Transient)
    int64 m_iTimeRespawnNoDown;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanUnspawnCharacter;
    
    UPROPERTY(EditAnywhere)
    float m_RecoveryRateByDangerState[3];
    
public:
    UCharacterHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRepSetIsDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldown();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetGhostDamage();
    
};

