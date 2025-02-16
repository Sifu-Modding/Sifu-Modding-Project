#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCCollisionResponsePreset.h"
#include "EBounceType.h"
#include "EDebugTargetState.h"
#include "EHeight.h"
#include "EThrowableState.h"
#include "HitBox.h"
#include "InteractiveMovable.h"
#include "Templates/SubclassOf.h"
#include "ThrowableActor.generated.h"

class AActor;
class AFightingCharacter;
class UAIPerceptionStimuliSourceComponent;
class UBoxComponent;
class UCurveFloat;
class UHitBoxComponent;
class UPhysicalActorDependencyComponent;
class UReplayableDestructionComponent;
class UReplayablePhysObjectComponent;
class USceneComponent;
class USphereComponent;
class UThrowObjectAnimRequest;
class UThrowableData;
class UThrowableObjMovementComponent;

UCLASS(Blueprintable)
class SIFU_API AThrowableActor : public AInteractiveMovable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateUpdated, EThrowableState, _eNewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateUpdated OnStateUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPickedupFromSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sBoneToAttachToWhenThrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThrowObjectAnimRequest> m_ThrowAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vThrowStartBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLastHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLastHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_aHitActorToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_BreakableProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_ThrowPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistToThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowableObjMovementComponent* m_MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* m_PerceptionStimuli;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayableDestructionComponent* m_ReplayableDestructionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitBoxComponent* m_throwHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeIgnoreFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnTargetHitSpeedReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMissingSpeedReduc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMissedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyGravityWhenFlyingFreely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBounceType m_eBounceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBounceType m_eCurrentBounceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_BounceBackAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_BounceBackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSimulatePhysicOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileAtRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileAtRestOnBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileThrownNoCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileSnapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileAfterHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfileOnBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_ColProfilePickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeight m_eTargettedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeight m_eAltTargettedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeightLimitForFootAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAlternateHeightForFreeThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOffsetDistTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistToCheckCollOnPathFreely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSoundNoiseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyActorOnBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThrowableData> m_throwableData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrowableState m_eState;
    
public:
    AThrowableActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWakeUp(bool _bWakesUp);
    
    UFUNCTION(BlueprintCallable)
    void CheckStabilisationForPhysicOptimization();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTooCloseToThrow(const AActor* _Instigator, const AActor* _target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EThrowableState BPF_GetThrowableState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UThrowableData* BPF_GetThrowableData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTarget(const AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugTargetState BPF_GetDebugTargetState(const AFightingCharacter* _character, float& _fOutDist) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OverrideBounceType(const AActor* _Instigator, const AActor* _target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdateTicks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnThrown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetHitBox(FHitBox& _outHitbox, AActor* _actorHit);
    
};

