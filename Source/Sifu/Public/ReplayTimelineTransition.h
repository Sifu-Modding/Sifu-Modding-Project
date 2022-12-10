#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineTimeDilationData.h"
#include "ReplayTimelineContainerBase.h"
#include "EReplayTransitionElement.h"
#include "UObject/NoExportTypes.h"
#include "ReplayTimelineIndicatorDisplayProperties.h"
#include "ReplayTimelineCurrentTransitionContext.h"
#include "ReplayTimelineTimeDilationContext.h"
#include "ReplayTimelineTransition.generated.h"

class UReplayKeyWidget;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineTransition : public UReplayTimelineContainerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<EReplayTransitionElement> m_DrawOrder;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_DefaultTint;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_HighlightTint;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCurrentTransitionAntiAlias;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCurrentTransitionThickness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FReplayTimelineIndicatorDisplayProperties m_TimeDilationDisplayProperties;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FReplayTimelineTimeDilationContext m_TimeDilationTransitionsContext;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FReplayTimelineCurrentTransitionContext m_CurrentTransitionContext;
    
public:
    UReplayTimelineTransition();
protected:
    UFUNCTION()
    void OnKeyHoverOrSelectStateChanged(const UReplayKeyWidget* _widget);
    
    UFUNCTION()
    void OnDelayedUpdateTransitionForKey(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OverrideGenerateTimeDilationIndicatorDilatedTimes(UPARAM(Ref) FReplayTimelineTimeDilationData& _data) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DrawTimeDilationTransitions();
    
};

