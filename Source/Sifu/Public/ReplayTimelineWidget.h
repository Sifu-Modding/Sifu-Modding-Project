#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplayWidgetHandler.h"
#include "Blueprint/UserWidget.h"
#include "ReplayKeyData.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "EReplayKeyIndexUpdateReason.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EReplayTimelineDebugType.h"
#include "ReplayTimelineWidget.generated.h"

class UCanvasPanel;
class UReplayTimelineContainerBase;
class UReplayTimelineTransition;
class UReplayKeyWidget;
class UReplayKey;
class AReplayController;
class UReplayTimelineModel;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineWidget : public UUserWidget, public IReplayWidgetHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float m_fZoom;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreviewCursorAlphaTriggerUnzoom;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAdaptZoomViewPercentage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UReplayTimelineContainerBase* m_BackgroundWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UReplayTimelineTransition* m_TransitionWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* m_KeysPanel;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin m_TimelineMargin;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayKeyWidget> m_KeyWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TMap<UReplayKey*, UReplayKeyWidget*> m_KeyWidgetsMap;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UReplayKeyWidget*> m_KeyWidgets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AReplayController* m_ReplayController;
    
public:
    UReplayTimelineWidget();
protected:
    UFUNCTION()
    void OnTimelineControllerTransitionContextInitialized();
    
    UFUNCTION()
    void OnKeyDataUpdated(UReplayKey* _key, const FReplayKeyData& _previousData);
    
    UFUNCTION()
    void OnKeyDataIndexUpdate(UReplayKey* _key, int32 _iPreviousIndex, EReplayKeyIndexUpdateReason _eReason);
    
    UFUNCTION()
    void OnGoToTimeCompleted();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetZoom(float _fZoom);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_KeyPropertyChanged(UReplayKey* _key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(AReplayController* _controller);
    
    UFUNCTION(BlueprintPure)
    UReplayKeyWidget* BPF_GetWidget(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimelinePosition(float _fDilatedDemoTime) const;
    
    UFUNCTION(BlueprintPure)
    FFloatRange BPF_GetRemappedZoomView(const FFloatRange& _zoomRescaleRange) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetKeyPositionOffsetOverrides(const UReplayKeyWidget* _keyWidget, float& _fOutTimeOffset, float& _fTimelinePositionOffset) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetKeyPosition(const UReplayKeyWidget* _keyWidget, bool _bOffsetKeySize, bool _bAddContainerPadding, bool& _bOutIsOutOfBounds, bool _bPreventKeyTypePositionOverride) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentTimelinePosition() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentDilatedTime() const;
    
    UFUNCTION(BlueprintCallable)
    UReplayKeyWidget* BPF_AddKey(UReplayKey* _key);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_RequestKeysDisplayUpdate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUpdateKeySelectedDisplay(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTimelineControllerTransitionContextInitialized(const UReplayKey* _currentCameraKey);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPaintTimelineBounds(const FFloatRange& _zoomRescaleRange, const FFloatRange& _timelineRange, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPaintCursorPreview(FVector2D _vStartPosition, FVector2D _vEndPosition, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyWidgetHoverOrSelectChange(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnKeySelectionUpdate(UReplayKey* _key, bool _bSelected);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnKeyPostDelete(UReplayKey* _key);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnKeyDilatedTimeRecalc(int32 _iStartingIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyAdded(UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDebugPaintCursor(FVector2D _vStartPosition, FVector2D _vEndPosition, EReplayTimelineDebugType _eDebugType, UPARAM(Ref) FPaintContext& _context) const;
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    UReplayTimelineModel* BPF_GetTimelineModel() const override PURE_VIRTUAL(BPF_GetTimelineModel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetTimelineDilatedTimeBounds(float& _fLowerBound, float& _fUpperBound) const override PURE_VIRTUAL(BPF_GetTimelineDilatedTimeBounds,);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetTimelineDilatedDemoTimeAlpha(float _fDilatedDemoTime) const override PURE_VIRTUAL(BPF_GetTimelineDilatedDemoTimeAlpha, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FVector2D BPF_GetContainerLocalSize() const override PURE_VIRTUAL(BPF_GetContainerLocalSize, return FVector2D{};);
    
};

