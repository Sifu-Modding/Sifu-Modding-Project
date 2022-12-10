#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "SCDelegate.h"
#include "ReplayableDestructibleStateChangeDelegateDelegate.h"
#include "ReplicatedDamageEvent.h"
#include "EReplayableDestructibleState.h"
#include "ReplicatedDestructibleChunks.h"
#include "ReplicatedBoxSphereBounds.h"
#include "ReplayableDestructibleComponent.generated.h"

class UReplayableStaticObjectComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bCreatePhysicsStateAtStart;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnReCreatedPhysicsState;*/
    
    UPROPERTY(BlueprintAssignable)
    FReplayableDestructibleStateChangeDelegate OnRepDestructibleStateChange;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayNotifyHitEvent;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_bOnFirstDestructionEnableChunksCollision;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplayUpdateChunksOnTick)
    bool m_bReplayUpdateChunksOnTick;
    
    UPROPERTY(Instanced, Transient)
    UReplayableStaticObjectComponent* m_ReplayableStaticObjectComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_DamageEvents)
    TArray<FReplicatedDamageEvent> m_DamageEvents;
    
private:
    UPROPERTY(Transient)
    bool m_bCreatePhysicsState;
    
    UPROPERTY(ReplicatedUsing=OnRep_ChunksState)
    FReplicatedDestructibleChunks m_ChunksState;
    
    UPROPERTY(ReplicatedUsing=OnRep_Bounds)
    FReplicatedBoxSphereBounds m_ReplicatedBounds;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplayableDestructibleState)
    EReplayableDestructibleState m_eReplayableDestructibleState;
    
public:
    UReplayableDestructibleComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnReplayTimeDilationChanged(float _fDilation);
    
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
    UFUNCTION()
    void OnRep_ReplayUpdateChunksOnTick();
    
    UFUNCTION()
    void OnRep_ReplayableDestructibleState();
    
protected:
    UFUNCTION()
    void OnRep_DamageEvents();
    
private:
    UFUNCTION()
    void OnRep_ChunksState();
    
    UFUNCTION()
    void OnRep_Bounds();
    
protected:
    UFUNCTION()
    void EnableNotifyHitEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetApexActorEnabled(bool _bValue);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDamaged() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnPreFirstDamageReceived(float _fBaseDamage, bool _bFullDamage);
    
};

