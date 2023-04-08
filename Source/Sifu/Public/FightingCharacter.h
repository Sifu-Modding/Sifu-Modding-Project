#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilitySystemInterface.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SCDelegate.h"
#include "SCGestureAndBlendProfile.h"
#include "SCGestureContainer.h"
#include "SCUserDefinedEnumHandler.h"
#include "BaseCharacter.h"
#include "DamageInfos.h"
#include "EALBinaryOperation.h"
#include "EALPriority.h"
#include "EAvoidType.h"
#include "ECameraTeleportationRotationBehavior.h"
#include "EDangerStates.h"
#include "EEquipmentSlot.h"
#include "EFactionsEnums.h"
#include "EFallLevel.h"
#include "EFidgetMirroringTypes.h"
#include "EFightingCharacterBPComponents.h"
#include "EHeight.h"
#include "EItemPowers.h"
#include "EMoveStatus.h"
#include "EOrderType.h"
#include "EPredictionBehavior.h"
#include "EQuadrantTypes.h"
#include "ERelationshipTypes.h"
#include "HandledWeaponInfo.h"
#include "HitDefenseResult.h"
#include "HitDescription.h"
#include "HitRequest.h"
#include "HittableActor.h"
#include "ImpactResult.h"
#include "InputAction.h"
#include "InputContext.h"
#include "PelvisDirectionComputationParams.h"
#include "TargetableActor.h"
#include "FightingCharacter.generated.h"

class AActor;
class ABaseWeapon;
class AFightingCharacter;
class AInteractiveMovable;
class UAIFightingComponent;
class UASMComponent;
class UActorComponent;
class UAttackComponent;
class UAvailabilityLayerDB;
class UAvailabilityLayerData;
class UAvoidPropertyDB;
class UBaseWeaponData;
class UCameraComponentThird;
class UCapsuleComponent;
class UCharacterHealthComponent;
class UCharacterHitBoxComponent;
class UDeathDB;
class UDefenseComponent;
class UEffectData;
class UFightingCharAnimRepComponent;
class UHitComponent;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMessengerComponent;
class UOrderComponent;
class UPhysicalAnimationComponent;
class UPlayerAnim;
class UPlayerFightingComponent;
class UPrimitiveComponent;
class UReplayFightingCharacterComponent;
class UReplayablePhysicsComponent;
class USCAbilitySystemComponent;
class USkeletalMeshComponent;
class UStatsComponent;
class UTargetableActorComponent;
class UVisibleWeaponData;

UCLASS(Blueprintable)
class SIFU_API AFightingCharacter : public ABaseCharacter, public ITargetableActor, public IHittableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResilienceChanged, int32, _iNewResilience);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecoveryFromDamageDealt, float, _fHealAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquip, bool, _bEquipmentSuccessful);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectAddedOrRemoved, bool, _bAdded, UEffectData*, _effectData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAvoidSuccessDelegate, FHitRequest, _hitRequest, FHitDefenseResult, _hitDefenseResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorHiddenChanged, bool, _bActorHidden);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FKilldDelegate, AActor*, Victim, bool, _bIsOnlyAssist, bool, _bKillingBlow, AActor*, _Instigator, const FDamageInfos&, _damageInfos);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAvoidCapsuleHitDelegate, const FHitResult&, _hitResult, const FHitRequest&, _hitRequest, const FHitDefenseResult&, _defenseResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquip OnEquipWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquip OnUnequipWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorHiddenChanged OnActorHiddenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidCapsuleHitDelegate OnAvoidCapsuleHitDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerDB* m_availabilityLayerDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimSyncBoneViewPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKilldDelegate OnKilledSomething;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvoidSuccessDelegate OnAvoidSuccessDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectAddedOrRemoved OnEffectAddedOrRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecoveryFromDamageDealt OnRecoveryFromDamageDealt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResilienceChanged OnResilienceChanged;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnFalling;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterHitBoxComponent* m_PushHitBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHasJustBeenHitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitDescription m_HittedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowAutonomousAnimPoseTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDefenseComponent* m_DefenseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USCAbilitySystemComponent* m_AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetableActorComponent* m_TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* m_PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_currentlyAttachedSocket;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackComponent* m_AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UCameraComponentThird* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_DefaultHandWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_DefaultLegWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitComponent* m_HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerFightingComponent* m_PlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIFightingComponent* m_AIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_AvoidCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_HitCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterHealthComponent* m_HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMessengerComponent* m_MessengerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayablePhysicsComponent* m_ReplayablePhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFightingCharAnimRepComponent* m_FightingCharAnimRepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayFightingCharacterComponent* m_ReplayFightingCharacterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASMComponent* m_ASMComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeathDB* m_DeathDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TransitionZoneId, meta=(AllowPrivateAccess=true))
    uint8 m_uiTransitionZoneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinHeightForVisbilityTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHeightForVisbilityTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PickUpAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bSpawnOccured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bReceivedSaveFailedCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCheckInventoryBug1_25;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 m_uiPawnCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionsEnums m_eFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateCollisionProfileOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollectionGameplay;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_asTargetBones[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCapsuleRadiusRatioForThrowableTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPelvisDirectionComputationParams m_defaultPelvisComputationParams;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnRemoveSlapstick;*/
    
public:
    AFightingCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* _target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMovementAnimation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide(bool _bForceUnrevivable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFlyMode(bool _bFlyModeActivated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFaction(uint8 _uiFaction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPullOutWeapon(const FHandledWeaponInfo& HandledWeaponInfo);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGameplayTag(const FString& _tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PushCamera(const FString& _inCameraName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PopCamera();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTakingOutWeaponOrderEnded(uint8 _uiOrderId, UOrderComponent* _orderComp);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TransitionZoneId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOrderParryInstigatorStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedInternalCallback(bool _bAdded, UEffectData* _effectDataAsset);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetFaction(uint8 _uiFaction);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveEffect(UEffectData* _effectData, int64 _iRemovalTimeTick);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLoadWeaponMesh(const FHandledWeaponInfo& HandledWeaponInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAddEffect(UEffectData* _effectData, int64 _iStartTimeTick);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateRagdoll(bool _bActivate, float _fBlendWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hitted(const FHitDescription& _hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleSwapHand(EOrderType _ePreviousOrderType);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndComboForWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerFightingComponent* GetPlayerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UPhysicalAnimationComponent* GetPhysicalAnimationComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDefenseComponent* GetDefenseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIFightingComponent* GetAiComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ComboStarted();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearCameras();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce, bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TakeOutWeapon();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwapWeaponHandWithAnim(AActor* _actorToPickup, uint8 _uiPreviousOrderID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_SpawnFootStepDecal(UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsValidTarget(bool _bIsValidTarget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvincibility(bool _bIsInvincible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGuardGaugeInfinite(bool _bIsInfinite, bool _bRestoreGauge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFaction(EFactionsEnums _eFaction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveAnimInstanceReference();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreSavedAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetOverrideTargetting(const FString& _targettingToRemove);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetInputStack(const FString& _context);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PushAvailabilityLayerContext(InputContext _eInputContext, EALPriority _eALPriority);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PushAvailabilityLayer(const UAvailabilityLayerData* _layer, EALBinaryOperation _eBinaryOperation, InputContext _eContext, EPredictionBehavior _ePredictionBehavior, int32 _iLinkedLayerId, int32 _iPriority, int32 _iALContext);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAvailabilityLayerContext(InputContext _eInputContext, int32 _iContextID);
    
    UFUNCTION(BlueprintCallable)
    uint8 BPF_PlayGestureOnCharacter(const FSCGestureContainer& _gestureContainer, bool _bLoop);
    
    UFUNCTION(BlueprintCallable)
    uint8 BPF_PlayGesture(FSCGestureAndBlendProfile _gesture, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bLoop, EFidgetMirroringTypes _eMirrorHandling);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PickUpObject(AInteractiveMovable* _object, bool _bMirrorPickup);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideTargetting(const FString& _targettingToOverride);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyTeleport(bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastRemoveEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastAddEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInvicible() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGuardGaugeInfinite();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGetUpDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsBestActionAvailable(InputAction _eAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsActorInAttackRange(const AActor* _actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasWeaponEquipped(ABaseWeapon*& _outWeaponEquipped, bool _bIgnoreUnusableWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasValidTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseWeapon* BPF_GetPickedUpWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInteractiveMovable* BPF_GetPickedUpObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetLeftStickDirection(bool _bFallbackToCameraDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHitComponent* BPF_GetHitComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetHeightFromFeet(const FVector& _vLocToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterHealthComponent* BPF_GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetDirToTarget(bool _bCanUseCamera, const AActor* _specifiedTarget, bool _bFallbackToDefaultTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeathDB* BPF_GetDeathDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentTotalResilience() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponentThird* BPF_GetCameraThird() const;
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* BPF_GetBPComponent(EFightingCharacterBPComponents _eComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UASMComponent* BPF_GetASMComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAnim* BPF_GetAnimGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEffectData*> BPF_GetAllActiveEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCAbilitySystemComponent* BPF_GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_DrawDecalToRenderTarget(UMaterialInterface* _decalMaterial, float _fSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_ComputeQuadrant(AActor* _towardSpecificTarget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CharacterFullySpawned();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ActivateCollision(const FString& _contextString, bool _bActivate, bool _bLetStaticMeshOn, bool _bBlockTargettedAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateTargettedByThrowable(bool _bIsTargetted, EHeight _eTargettingHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateTargettedByPushable(bool _bIsTargetted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateTargettedByGrab(bool _bIsTargetted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ThrowableHit(const FHitDescription& _hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TargetChanged(AActor* _old);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Spawn(bool m_bRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetCharacterHidden(bool _bHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveInProgressPercent(float _fPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveCancelPercent(float _fPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PickUpWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PerfectLinkWoOMissed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _eNewRelation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRecoveryFromDamageDealt(float _fHealthRecovered);
    
   /* UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);*/
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEffectStart(UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEffectEnd(UEffectData* _effectData, bool _bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful_PredictionServer(const FHitRequest& _inHitRequest, const FHitDefenseResult& _defenseInfos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidCapsuleHit(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MoveStatusChanged(EMoveStatus _MoveStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Hit(const FHitDescription& _hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndRevive(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndBeingRevived(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DropWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoParry(EQuadrantTypes _eParryQuadrantRegardingTarget, EQuadrantTypes _eParryQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoDodge(FVector _vDodgeDirection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DodgeSuccess(AFightingCharacter* _attacker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoAvoid(EAvoidType _eAvoidType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoAbsorb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeingRevivedStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Avoided(EAvoidType _eAvoid, const UAvoidPropertyDB* _AvoidPropertyDB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Absorb_PredictionServer(const FHitResult& _hitResult, const FHitRequest& _inHitRequest, const FImpactResult& _result, const FHitDefenseResult& _defenseInfos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Absorb(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEventParrySuccessful(const FHitResult& _hitResult, const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEventParried(FVector _vImpactPosition, AFightingCharacter* _ParryInstigator);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void AddGameplayTag(const FString& _tag);
    
    
    // Fix for true pure virtual functions not being implemented
};

