#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"
#include "ESCBlendType.h"
#include "ESCSequenceBlendViewState.h"
#include "BaseComponent.h"
#include "CameraLookAtServiceBehavior.h"
#include "CameraLookAtServiceBehaviorConfig.h"
#include "CameraLookAtServiceBehaviorTime.h"
#include "CameraMirrorManagementConfig.h"
#include "CameraRepulsionConfig.h"
#include "CameraTargetPosition.h"
#include "DeadZone.h"
#include "ECameraLockAlgorithms.h"
#include "ECameraTransitionState.h"
#include "EDeadZoneTypes.h"
#include "CameraComponentThird.generated.h"

class AActor;
class UAbstractCameraData;
class UBlackboardComponent;
class UCameraDB;
class UCameraLagStruct;
class UCurveFloat;
class UMaterialParameterCollection;
class USCLevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCameraComponentThird : public UCameraComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceViewBlendChange, USCLevelSequence*, _levelSequence);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraAnimDrivenStateChanged, ECameraTransitionState, _eNewState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraLagStruct* m_sActualLagParameters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceViewBlendChange OnLevelSequenceViewBlendStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraAnimDrivenStateChanged OnCameraAnimDrivenStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraDB* m_CameraDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMouseYawScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMousePitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollectionCameraDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CameraDistanceMPCParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDialogAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDialogAspectRatioBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eDialogAspectRatioBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CameraFadeMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bCameraLDMode;
    
public:
    UCameraComponentThird();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateCachedTargets();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnPauseLookAt(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnFreezeMirrorServices(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnFreezeLockService(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnFreezeHidingZoneRepulsion(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnFreezeCameraDeadZoneRepulsion(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_TransformInputVector(FVector2D _vInputVector) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSlowMotionFactor(float _fSlowMotionFactor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMirrorCursorValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsCameraLDMode(bool _bCameraLDMode, const AActor* _replayCameraAnchor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFramingAlgorithmOverrideTarget(bool _bOverride, FVector _vPosition3D, float _fDurationBlendingIn, UCurveFloat* _dynamicCurveForBlendingIn, float _fDurationBlendingOut, UCurveFloat* _dynamicCurveForBlendingOut);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDialogAspectRatio(bool _bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetLockManualCooldownToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCameraRepulsionConfig();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCameraDataToDefault(UAbstractCameraData* _cameraDataToReset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Reset1vNLockBehaviorToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Reset1v1LockBehaviorToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveLookAt(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAllLookAt();
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PushRemoveDampingOnAlgorithms(const FString& _context);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopRemoveDampingOnAlgorithms(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PauseLookAtWithHandle(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PauseLookAt(float _fDuration, const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideLockManualCooldown(float _fNewCooldown);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCameraRepulsionConfig(const FCameraRepulsionConfig& _newConfig);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCameraData(UAbstractCameraData* _cameraDataToOverride, UAbstractCameraData* _newCameraDataToUse);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Override1vNLockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Override1v1LockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchNewMirrorTarget(const FCameraMirrorManagementConfig& _newMirrorTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsWorldLocationInFront(const FVector& _vLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSleepingFromManualInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLookAtActive(int32 _iHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLockAlgoActiveAndRunning(ECameraLockAlgorithms _eAlgo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLockActiveAndRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDampingRemovedOnAlgorithm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentCameraAllowingLookAtCollisionExtraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentCameraAllowingDodgeMirrorChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsColliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAnimDrivenInMixerNode(bool _bAllowSearchInBlenderStartNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAnimDriven() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasLookAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetValidTarget(bool _bIncludeAllPotentialAlertedTarget, TArray<AActor*>& _arrayOfTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeSinceNoInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNumberOfValidTarget(bool _bIncludeAllPotentialAlertedTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetNearestColDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetMirrorFarTargettedPosition(TArray<FCameraTargetPosition>& _outTargetPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMirrorCursorValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentLookAtRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeadZone> BPF_GetCurrentDeadZones(EDeadZoneTypes _eDeadZoneTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESCSequenceBlendViewState BPF_GetCurrentCinematicState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCollisionMinDist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform BPF_GetCameraTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCameraShakeFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCameraCollisionTargetRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCameraCollisionRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlackboardComponent* BPF_GetBlackBoardComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBlackBarScreenRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAngleDiffFromAnimDriven(float& _fOutYawDeg, float& _fOutPitchDeg);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeMirrorServices(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeLockService(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeHidingZoneRepulsion(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeCameraDeadZoneRepulsion(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ComputeIsMirrorFromCharacterPosOnScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddLookAt(const FCameraLookAtServiceBehavior& _newLookAt, int32& _iHandle);
    
    
    // Fix for true pure virtual functions not being implemented
};

