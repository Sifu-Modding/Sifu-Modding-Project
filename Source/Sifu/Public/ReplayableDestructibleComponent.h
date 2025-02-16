#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "SCDelegate.h"
#include "EReplayableDestructibleState.h"
#include "ReplayableDestructibleStateChangeDelegateDelegate.h"
#include "ReplicatedBoxSphereBounds.h"
#include "ReplicatedDamageEvent.h"
#include "ReplicatedDestructibleChunks.h"
#include "ReplayableDestructibleComponent.generated.h"

class UReplayableStaticObjectComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCreatePhysicsStateAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast OnReCreatedPhysicsState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayableDestructibleStateChangeDelegate OnRepDestructibleStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayNotifyHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bOnFirstDestructionEnableChunksCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplayUpdateChunksOnTick, meta=(AllowPrivateAccess=true))
    bool m_bReplayUpdateChunksOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayableStaticObjectComponent* m_ReplayableStaticObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageEvents, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedDamageEvent> m_DamageEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCreatePhysicsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChunksState, meta=(AllowPrivateAccess=true))
    FReplicatedDestructibleChunks m_ChunksState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Bounds, meta=(AllowPrivateAccess=true))
    FReplicatedBoxSphereBounds m_ReplicatedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplayableDestructibleState, meta=(AllowPrivateAccess=true))
    EReplayableDestructibleState m_eReplayableDestructibleState;
    
public:
    UReplayableDestructibleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnReplayTimeDilationChanged(float _fDilation);
    
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayUpdateChunksOnTick();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayableDestructibleState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageEvents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChunksState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Bounds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableNotifyHitEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetApexActorEnabled(bool _bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDamaged() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnPreFirstDamageReceived(float _fBaseDamage, bool _bFullDamage);
    
};

