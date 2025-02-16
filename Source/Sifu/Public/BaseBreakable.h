#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SCCollisionResponsePreset.h"
#include "BaseBreakable.generated.h"

//class UAkAudioEvent;
class UBoxComponent;
class UPhysicalActorDependencyComponent;
class UPrimitiveComponent;
class UReplayableDestructibleComponent;
class UReplayablePhysObjectComponent;
class USCStreamingActorComponent;

UCLASS(Abstract, Blueprintable)
class SIFU_API ABaseBreakable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_ProximityBoxCreatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayableDestructibleComponent* m_ReplayableDestructibleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_editorBoxCollisionPreset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 m_uiActionStateDestroyableByMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 m_uiAIActionStateDestroyableByMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFilterByActionStateOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFilterByActionStateOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFilterByResistanceIfMatchActionStateOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFilterByResistanceIfDontMatchActionStateOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyableByThrowable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiThrowableStateDestroyableByMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDestructionVelocityRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecuteFractureOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHasBeenFracturedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActionStateImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPhysicImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPhysicRightCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fThrowableImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayBounceSfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BounceRTPC;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // TMap<float, UAkAudioEvent*> m_PerImpulseBounceSfxs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_DestructionCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProximityCreatePhysicsOffset;
    
public:
    ABaseBreakable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWakeStateChanged(bool _bIsAwake);
    
    UFUNCTION(BlueprintCallable)
    void OnPendingDamageReceived(const FVector& _vHitPoint, const FVector& _vHitDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnbindOverlap();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDamageable(bool _bInDamageable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EngageDestructionCausedByActor(AActor* _inCauser, float _fInImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EngageDestruction(const FVector& _vInHurtOrigin, float _fRadius, float _fInImpulseStrength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float BPE_GetRTPCValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_GetMassOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_GetHitResistance() const;
    
};

