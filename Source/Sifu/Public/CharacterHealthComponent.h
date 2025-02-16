#pragma once
#include "CoreMinimal.h"
#include "EDownState.h"
#include "HealthComponent.h"
#include "CharacterHealthComponent.generated.h"

class UCharacterHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownStateChanged, UCharacterHealthComponent*, _healhComponent, EDownState, _state);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGhostDamageLost);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRecoverHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostDamageLost OnGhostDamageLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownStateChanged OnDownStateChange;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHealthMultiplier[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryCooldownInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGhostDamageRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fGhostDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepSetIsDown, meta=(AllowPrivateAccess=true))
    bool m_bIsDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDownState m_eDownState;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iTimeRespawnNoDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanUnspawnCharacter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RecoveryRateByDangerState[3];
    
public:
    UCharacterHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRepSetIsDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGhostDamage();
    
};

