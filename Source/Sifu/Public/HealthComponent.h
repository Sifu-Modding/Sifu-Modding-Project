#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class UHealthComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHealthComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDamageDelegate, float, _fAmount, UHealthComponent*, _healthComponent, bool, _bApplied);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeathComponentDelegateDynamic, UHealthComponent*, _healhComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGhostDamageLost);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathComponentDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageDelegate m_OnDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHeathComponentDelegateDynamic m_OnLifeStockLostDyn;
    
    UPROPERTY(BlueprintAssignable)
    FHeathComponentDelegateDynamic m_OnDeathDismissed;
    
    UPROPERTY(BlueprintAssignable)
    FDeathComponentDelegate m_OnDeath;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleAnywhere)
    float m_fHealth;
    
protected:
    UPROPERTY(EditAnywhere)
    float m_fMaxHealth;
    
    UPROPERTY(EditAnywhere)
    int32 m_iLifeStock;
    
public:
    UHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHackSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanDieByDamage(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanBeDamaged(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanAddHealth(bool _bValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerAddHealth(float _fHealth);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetBaseMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(float _fDamage);
    
    
    // Fix for true pure virtual functions not being implemented
};

