#pragma once
#include "CoreMinimal.h"
#include "SCAIComponent.h"
#include "EGlobalBehaviors.h"
#include "SCSoundSwitchValue.h"
#include "EAlertedReason.h"
#include "AIComponent.generated.h"

class AAISpawner;
class UArchetypeAsset;
class UBehaviorTree;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIComponent : public USCAIComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnedDelegate, AAISpawner*, Spawner);
    
    UPROPERTY(BlueprintAssignable)
    FSpawnedDelegate OnSpawned;
    
protected:
    UPROPERTY(Transient)
    UArchetypeAsset* m_CurrentAIArchetype;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSCSoundSwitchValue> m_VoiceArchetypeSwitches;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Spawner)
    AAISpawner* m_Spawner;
    
private:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_Behavior;
    
public:
    UAIComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Spawner();
    
    UFUNCTION()
    void OnAIInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, const EAlertedReason _eAlertedReason, bool _bSkipBark);
    
    UFUNCTION(BlueprintPure)
    FSCSoundSwitchValue BPF_GetVoiceArchetypeSwitch() const;
    
    UFUNCTION(BlueprintPure)
    AAISpawner* BPF_GetSpawner() const;
    
    UFUNCTION(BlueprintPure)
    UArchetypeAsset* BPF_GetArchetypeData() const;
    
};

