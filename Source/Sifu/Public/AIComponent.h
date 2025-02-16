#pragma once
#include "CoreMinimal.h"
#include "SCAIComponent.h"
#include "SCSoundSwitchValue.h"
#include "EAlertedReason.h"
#include "EGlobalBehaviors.h"
#include "AIComponent.generated.h"

class AAISpawner;
class AActor;
class UArchetypeAsset;
class UBehaviorTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIComponent : public USCAIComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnedDelegate, AAISpawner*, Spawner);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnedDelegate OnSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_CurrentAIArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCSoundSwitchValue> m_VoiceArchetypeSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Spawner, meta=(AllowPrivateAccess=true))
    AAISpawner* m_Spawner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_Behavior;
    
public:
    UAIComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Spawner();
    
    UFUNCTION(BlueprintCallable)
    void OnAIInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, const EAlertedReason _eAlertedReason, bool _bSkipBark);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSCSoundSwitchValue BPF_GetVoiceArchetypeSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAISpawner* BPF_GetSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArchetypeAsset* BPF_GetArchetypeData() const;
    
};

