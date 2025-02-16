#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "HealthComponent.generated.h"

class AActor;
class UHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHealthComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDamageDelegate, float, _fAmount, UHealthComponent*, _healthComponent, bool, _bApplied);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeathComponentDelegateDynamic, UHealthComponent*, _healhComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGhostDamageLost);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathComponentDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDelegate m_OnDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeathComponentDelegateDynamic m_OnLifeStockLostDyn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeathComponentDelegateDynamic m_OnDeathDismissed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathComponentDelegate m_OnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLifeStock;
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBaseMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamageOnAvoid(AActor* _Instigator);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(float _fDamage);
    

    // Fix for true pure virtual functions not being implemented
};

