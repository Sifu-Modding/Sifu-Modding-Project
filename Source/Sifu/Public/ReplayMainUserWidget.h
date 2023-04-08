#pragma once
#include "CoreMinimal.h"
#include "ECycleDirection.h"
#include "EReplayCameraMode.h"
#include "EReplayTimelineControlType.h"
#include "ETimelineStateAction.h"
#include "ReplayAvailabilityLayerCache.h"
#include "ReplayKeyData.h"
#include "ReplayMenuWidget.h"
#include "ReplayTimelineControl.h"
#include "TimelineChangeState.h"
#include "ReplayMainUserWidget.generated.h"

class AActor;
class AReplayController;
class UReplayKey;
class UReplayTimelineWidget;

UCLASS(Blueprintable, EditInlineNew, Config=Replay)
class SIFU_API UReplayMainUserWidget : public UReplayMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineControl m_TimelineControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUIInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoSelectKeyOnAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlyApplyPersistentSettingsOnCustomCameraKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnApplyCameraSettingsSetCameraModeToCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSelectKeyOnGoToTimeCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnSelectFailDefaultToSelectedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayTimelineWidget* m_TimelineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayAvailabilityLayerCache m_AvailabilityLayers;
    
public:
    UReplayMainUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    bool OnTimelineModePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyAdded(UReplayKey* _key, bool _bCanSelectKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleTimelineMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelectedKeyLookAtTarget(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelectedKeyFollowTarget(const AActor* _actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetInPreviewMode(bool _bInPreview);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInMoveKeyState(const bool _bMovingKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectPreviousKey();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectNextKey();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectKeyAndGoToTime(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SelectKey(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTimelineControlAndScrub();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetSavedCameraTransform();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveSelectedKeyCut();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveSelectedKey();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveHoveredKey();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PasteKey();
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifySelectedKeyTimeDilationUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifySelectedKeyCameraModeUpdated();
    
    UFUNCTION(BlueprintCallable)
    void BPF_MoveTimelineCursor(ECycleDirection _eDirection, EReplayTimelineControlType _eControlType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeavePasteKeyMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInMoveKeyState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInKeyPastingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSelectedOrHoveredKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasKeySelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToTime(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetSelectedKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReplayController* BPF_GetReplayController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetKeyFromCurrentDemoTime(ECycleDirection _eDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsMovingTimelineCursor() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsInPreviewMode() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_CreateKeyWidgets();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CopySelectedKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanApplyCurrentCineCameraSettingsAndPositionToKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanApplyCurrentCineCameraSettingsAndPositionToCurrentTime() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCurrentCineCameraSettingsAndPositionToKey(UReplayKey* _key, bool _bApplyPosition, bool _bApplyLensSettings, bool _bApplyFocusSettings);
    
    UFUNCTION(BlueprintCallable)
    UReplayKey* BPF_AddKeyAtCurrentTime(int32 _iTypeFlags, const FReplayKeyData _presetData, int32 _iPresetOverride, bool& _bOutKeyAlreadyExists);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddCutAtCurrentTime(const FReplayKeyData _presetData, int32 _iPresetOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnVideoRecordingStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUndoOrRedoPressed(const ETimelineStateAction _eAction, const FTimelineChangeState& _changeState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnTimelineZoom(float _fActionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnTimelineMoveForwardPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnTimelineMoveBackwardPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTimelineModeToggled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnSpecialMenuPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnSelectRightKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnSelectLeftKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSelectedKeyDataUpdate(UReplayKey* _key, const FReplayKeyData& _previousData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnSelectCurrentKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnScrubReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnResumePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnReplayQuitPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnReplayJumpStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnReplayJumpEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnRemoveKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnRemoveCutPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPreviewModeChanged(bool _bInPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnPasteKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnNavigationModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMoveKeyRightPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMoveKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMoveKeyLeftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeySelectionUpdate(UReplayKey* _key, bool _bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeySelected(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyPastedOn(UReplayKey* _key, bool _bIsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyAdded(UReplayKey* _key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnGoToTimeInitiated(bool _bUnselectKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnGoToTimeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnEditReplayPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnEditCameraPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnCutCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnCopyKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnApplySettingsPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnAddSpeedKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnAddKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnAddCutPressed();
    
};

