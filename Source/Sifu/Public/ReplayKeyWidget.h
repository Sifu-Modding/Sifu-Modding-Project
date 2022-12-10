#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ButtonUserWidget.h"
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidgetStateChangedDelegate.h"
#include "ReplayKeyWidget.generated.h"

class UReplayKeyWidgetVisualsDB;
class UReplayKey;

UCLASS(EditInlineNew)
class SIFU_API UReplayKeyWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsKeySelected;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsKeyHovered;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D m_vSize;
    
    UPROPERTY(EditDefaultsOnly)
    UReplayKeyWidgetVisualsDB* m_VisualsDB;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayKey* m_Key;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vCachedTimelinePositionWithMargin;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vCachedTimelinePosition;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bCachedTimelineIsOutOfBounds;
    
    UPROPERTY(BlueprintAssignable)
    FReplayKeyWidgetStateChanged m_OnKeyMoved;
    
public:
    UReplayKeyWidget();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnSelectionUpdate(UReplayKey* _key, bool _bIsSelected);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnHoveringStateUpdate(UReplayKey* _key, bool _bIsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_ApplyVisualsOverride(const FReplayKeyWidgetVisualKey& _key, FVector2D& _vSize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ApplyVisuals(const FReplayKeyWidgetVisualData& _visuals);
    
};

