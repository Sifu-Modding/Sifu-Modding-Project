#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "BaseComponent.h"
#include "CameraLookAtServiceBehavior.h"
#include "ECameraTransitionState.h"
#include "ECameraLockAlgorithms.h"
#include "ESCBlendType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraRepulsionConfig.h"
#include "CameraLookAtServiceBehaviorTime.h"
#include "UObject/NoExportTypes.h"
#include "CameraLookAtServiceBehaviorConfig.h"
#include "CameraTargetPosition.h"
#include "CameraMirrorManagementConfig.h"
#include "ESCSequenceBlendViewState.h"
#include "CameraComponentThird.generated.h"

class UCameraLagStruct;
class UCameraDB;
class USCLevelSequence;
class UMaterialParameterCollection;
class UAbstractCameraData;
class AActor;
class UBlackboardComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCameraComponentThird : public UCameraComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceViewBlendChange, USCLevelSequence*, _levelSequence);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraAnimDrivenStateChanged, ECameraTransitionState, _eNewState);
    
    UPROPERTY(EditAnywhere)
    UCameraLagStruct* m_sActualLagParameters;
    
    UPROPERTY(BlueprintAssignable)
    FOnSequenceViewBlendChange OnLevelSequenceViewBlendStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCameraAnimDrivenStateChanged OnCameraAnimDrivenStateChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UCameraDB* m_CameraDB;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMouseYawScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMousePitchScale;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* m_MaterialParameterCollectionCameraDither;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CameraDistanceMPCParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDialogAspectRatio;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDialogAspectRatioBlendDuration;
    
    UPROPERTY(EditDefaultsOnly)
    ESCBlendType m_eDialogAspectRatioBlendType;
    
    UPROPERTY(EditAnywhere)
    FName m_CameraFadeMaterialParam;
    
    UPROPERTY(Replicated)
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
    
    UFUNCTION(BlueprintPure)
    FVector BPF_TransformInputVector(FVector2D _vInputVector) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSlowMotionFactor(float _fSlowMotionFactor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMirrorCursorValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsCameraLDMode(bool _bCameraLDMode, const AActor* _replayCameraAnchor);
    
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
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsWorldLocationInFront(const FVector& _vLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsSleepingFromManualInput() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsLookAtActive(int32 _iHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsLockAlgoActiveAndRunning(ECameraLockAlgorithms _eAlgo) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsLockActiveAndRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInCinematic() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCurrentCameraAllowingLookAtCollisionExtraction() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCurrentCameraAllowingDodgeMirrorChange() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsColliding() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAnimDrivenInMixerNode(bool _bAllowSearchInBlenderStartNode) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAnimDriven() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasLookAt() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetValidTarget(bool _bIncludeAllPotentialAlertedTarget, TArray<AActor*>& _arrayOfTarget) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimeSinceNoInput() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNumberOfValidTarget(bool _bIncludeAllPotentialAlertedTarget) const;
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetNearestColDirection() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetMirrorFarTargettedPosition(TArray<FCameraTargetPosition>& _outTargetPosition) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetMirrorCursorValue() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentLookAtRatio() const;
    
    UFUNCTION(BlueprintPure)
    ESCSequenceBlendViewState BPF_GetCurrentCinematicState() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCollisionMinDist() const;
    
    UFUNCTION(BlueprintPure)
    FTransform BPF_GetCameraTransform() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCameraShakeFactor() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCameraCollisionTargetRatio() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCameraCollisionRatio() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardComponent* BPF_GetBlackBoardComponent() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetBlackBarScreenRatio();
    
    UFUNCTION(BlueprintPure)
    void BPF_GetAngleDiffFromAnimDriven(float& _fOutYawDeg, float& _fOutPitchDeg);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeMirrorServices(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeLockService(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeHidingZoneRepulsion(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_FreezeCameraDeadZoneRepulsion(const FString& _contextString);
    
    UFUNCTION(BlueprintPure)
    bool BPF_ComputeIsMirrorFromCharacterPosOnScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddLookAt(const FCameraLookAtServiceBehavior& _newLookAt, int32& _iHandle);
    
    
    // Fix for true pure virtual functions not being implemented
};

