#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCCollisionResponsePreset.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BaseBreakable.generated.h"

class UReplayableDestructibleComponent;
class UPrimitiveComponent;
class UBoxComponent;
class USCStreamingActorComponent;
class UReplayablePhysObjectComponent;
class UPhysicalActorDependencyComponent;
class UAkAudioEvent;

UCLASS(Abstract)
class SIFU_API ABaseBreakable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* m_ProximityBoxCreatePhysics;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UReplayableDestructibleComponent* m_ReplayableDestructibleComponent;
    
    UPROPERTY(Instanced, Transient)
    UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(EditAnywhere)
    FSCCollisionResponsePreset m_editorBoxCollisionPreset;
    
    UPROPERTY(EditAnywhere)
    uint64 m_uiActionStateDestroyableByMask;
    
    UPROPERTY(EditAnywhere)
    uint64 m_uiAIActionStateDestroyableByMask;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bFilterByActionStateOnOverlap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bFilterByActionStateOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bFilterByResistanceIfMatchActionStateOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bFilterByResistanceIfDontMatchActionStateOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bDestroyableByThrowable;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_uiThrowableStateDestroyableByMask;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDestructionVelocityRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bExecuteFractureOnce;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_bHasBeenFracturedOnce;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMinDamageRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fActionStateImpulseStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPhysicImpulseStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPhysicRightCursor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fThrowableImpulseStrength;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPlayBounceSfx;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BounceRTPC;
    
   /* UPROPERTY(EditDefaultsOnly)
    TMap<float, UAkAudioEvent*> m_PerImpulseBounceSfxs;*/
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* m_DestructionCauser;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProximityCreatePhysicsOffset;
    
public:
    ABaseBreakable();
protected:
    UFUNCTION()
    void OnWakeStateChanged(bool _bIsAwake);
    
    UFUNCTION()
    void OnPendingDamageReceived(const FVector& _vHitPoint, const FVector& _vHitDirection);
    
    UFUNCTION()
    void OnOverlapEndProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBeginProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnbindOverlap();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDamageable(bool _bInDamageable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EngageDestructionCausedByActor(AActor* _inCauser, float _fInImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EngageDestruction(const FVector& _vInHurtOrigin, float _fRadius, float _fInImpulseStrength);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float BPE_GetRTPCValue() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_GetMassOverride() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_GetHitResistance() const;
    
};

