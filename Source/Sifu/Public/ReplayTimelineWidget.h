#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "EReplayKeyIndexUpdateReason.h"
#include "EReplayTimelineDebugType.h"
#include "ReplayKeyData.h"
#include "ReplayWidgetHandler.h"
#include "Templates/SubclassOf.h"
#include "ReplayTimelineWidget.generated.h"

class AReplayController;
class UCanvasPanel;
class UReplayKey;
class UReplayKeyWidget;
class UReplayTimelineContainerBase;
class UReplayTimelineModel;
class UReplayTimelineTransition;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayTimelineWidget : public UUserWidget, public IReplayWidgetHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewCursorAlphaTriggerUnzoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAdaptZoomViewPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayTimelineContainerBase* m_BackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayTimelineTransition* m_TransitionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_KeysPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_TimelineMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayKeyWidget> m_KeyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UReplayKey*, UReplayKeyWidget*> m_KeyWidgetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReplayKeyWidget*> m_KeyWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AReplayController* m_ReplayController;
    
public:
    UReplayTimelineWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimelineControllerTransitionContextInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyDataUpdated(UReplayKey* _key, const FReplayKeyData& _previousData);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyDataIndexUpdate(UReplayKey* _key, int32 _iPreviousIndex, EReplayKeyIndexUpdateReason _eReason);
    
    UFUNCTION(BlueprintCallable)
    void OnGoToTimeCompleted();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetZoom(float _fZoom);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_KeyPropertyChanged(UReplayKey* _key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(AReplayController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKeyWidget* BPF_GetWidget(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimelinePosition(float _fDilatedDemoTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFloatRange BPF_GetRemappedZoomView(const FFloatRange& _zoomRescaleRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetKeyPositionOffsetOverrides(const UReplayKeyWidget* _keyWidget, float& _fOutTimeOffset, float& _fTimelinePositionOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetKeyPosition(const UReplayKeyWidget* _keyWidget, bool _bOffsetKeySize, bool _bAddContainerPadding, bool& _bOutIsOutOfBounds, bool _bPreventKeyTypePositionOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentTimelinePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentDilatedTime() const;
    
    UFUNCTION(BlueprintCallable)
    UReplayKeyWidget* BPF_AddKey(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_RequestKeysDisplayUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdateKeySelectedDisplay(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTimelineControllerTransitionContextInitialized(const UReplayKey* _currentCameraKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPaintTimelineBounds(const FFloatRange& _zoomRescaleRange, const FFloatRange& _timelineRange, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPaintCursorPreview(FVector2D _vStartPosition, FVector2D _vEndPosition, UPARAM(Ref) FPaintContext& _context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyWidgetHoverOrSelectChange(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnKeySelectionUpdate(UReplayKey* _key, bool _bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnKeyPostDelete(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnKeyDilatedTimeRecalc(int32 _iStartingIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyAdded(UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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

