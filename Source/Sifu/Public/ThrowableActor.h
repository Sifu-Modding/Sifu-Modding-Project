#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveMovable.h"
#include "EThrowableState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EBounceType.h"
#include "HitBox.h"
#include "SCCollisionResponsePreset.h"
#include "EHeight.h"
#include "EDebugTargetState.h"
#include "UObject/NoExportTypes.h"
#include "ThrowableActor.generated.h"

class AActor;
class USphereComponent;
class UThrowObjectAnimRequest;
class UBoxComponent;
class USceneComponent;
class UPhysicalActorDependencyComponent;
class UThrowableObjMovementComponent;
class UAIPerceptionStimuliSourceComponent;
class UReplayablePhysObjectComponent;
class UReplayableDestructionComponent;
class UHitBoxComponent;
class UCurveFloat;
class UThrowableData;
class AFightingCharacter;

UCLASS()
class SIFU_API AThrowableActor : public AInteractiveMovable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateUpdated, EThrowableState, _eNewState);
    
    UPROPERTY(BlueprintAssignable)
    FStateUpdated OnStateUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsPickedupFromSpawning;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_sBoneToAttachToWhenThrowing;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UThrowObjectAnimRequest> m_ThrowAnimRequest;
    
    UPROPERTY(EditAnywhere)
    FVector m_vThrowStartBoxExtent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLastHitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLastHitNormal;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_aHitActorToRemove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* m_BoxColl;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* m_BreakableProximity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* m_ThrowPivot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fDistToThrow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UThrowableObjMovementComponent* m_MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* m_PerceptionStimuli;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UReplayableDestructionComponent* m_ReplayableDestructionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHitBoxComponent* m_throwHitBox;
    
    UPROPERTY(VisibleAnywhere)
    float m_fTimeIgnoreFloor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fOnTargetHitSpeedReduction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fMissingSpeedReduc;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fMissedDistance;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bApplyGravityWhenFlyingFreely;
    
    UPROPERTY(VisibleAnywhere)
    EBounceType m_eBounceType;
    
    UPROPERTY(BlueprintReadWrite)
    EBounceType m_eCurrentBounceType;
    
    UPROPERTY(VisibleAnywhere)
    UCurveFloat* m_BounceBackAngle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FFloatRange m_BounceBackRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bSimulatePhysicOnSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAtRest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAtRestOnBreakable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileThrown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileThrownNoCol;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithoutTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnapped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAfterHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileOnBounce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfilePickedUp;
    
    UPROPERTY(VisibleAnywhere)
    EHeight m_eTargettedHeight;
    
    UPROPERTY(VisibleAnywhere)
    EHeight m_eAltTargettedHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fHeightLimitForFootAnimation;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bUseAlternateHeightForFreeThrow;
    
    UPROPERTY(VisibleAnywhere)
    float m_fOffsetDistTrace;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fDistToCheckCollOnPathFreely;
    
    UPROPERTY(VisibleAnywhere)
    float m_fSoundNoiseRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDestroyActorOnBreak;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UThrowableData> m_throwableData;
    
private:
    UPROPERTY(VisibleInstanceOnly)
    EThrowableState m_eState;
    
public:
    AThrowableActor();
private:
    UFUNCTION()
    void OnWakeUp(bool _bWakesUp);
    
    UFUNCTION()
    void CheckStabilisationForPhysicOptimization();
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_UseFootToThrow(const AFightingCharacter* _Instigator) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ThrowFreely(AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ThrowAtTarget(AActor* _target, AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetupThrow(AFightingCharacter* _Instigator, AActor* _target, FVector _vThrowDirection);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetThrowableState(EThrowableState _eNewState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideThrowableData(TSubclassOf<UThrowableData> _newThrowableData);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsTooCloseToThrow(const AActor* _Instigator, const AActor* _target) const;
    
    UFUNCTION(BlueprintPure)
    EThrowableState BPF_GetThrowableState() const;
    
    UFUNCTION(BlueprintPure)
    UThrowableData* BPF_GetThrowableData() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTarget(const AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintPure)
    EDebugTargetState BPF_GetDebugTargetState(const AFightingCharacter* _character, float& _fOutDist) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OverrideBounceType(const AActor* _Instigator, const AActor* _target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnThrown();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetHitBox(FHitBox& _outHitbox, AActor* _actorHit);
    
};

