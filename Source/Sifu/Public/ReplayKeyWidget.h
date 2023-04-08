#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ButtonUserWidget.h"
#include "ReplayKeyWidgetStateChangedDelegate.h"
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidget.generated.h"

class UReplayKey;
class UReplayKeyWidgetVisualsDB;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayKeyWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsKeySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsKeyHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplayKeyWidgetVisualsDB* m_VisualsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayKey* m_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vCachedTimelinePositionWithMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vCachedTimelinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCachedTimelineIsOutOfBounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyWidgetStateChanged m_OnKeyMoved;
    
public:
    UReplayKeyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnSelectionUpdate(UReplayKey* _key, bool _bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnHoveringStateUpdate(UReplayKey* _key, bool _bIsHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_ApplyVisualsOverride(const FReplayKeyWidgetVisualKey& _key, FVector2D& _vSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ApplyVisuals(const FReplayKeyWidgetVisualData& _visuals);
    
};

