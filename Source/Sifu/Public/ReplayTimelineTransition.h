#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EReplayTransitionElement.h"
#include "ReplayTimelineContainerBase.h"
#include "ReplayTimelineCurrentTransitionContext.h"
#include "ReplayTimelineIndicatorDisplayProperties.h"
#include "ReplayTimelineTimeDilationContext.h"
#include "ReplayTimelineTimeDilationData.h"
#include "ReplayTimelineTransition.generated.h"

class UReplayKeyWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayTimelineTransition : public UReplayTimelineContainerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EReplayTransitionElement> m_DrawOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_DefaultTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_HighlightTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCurrentTransitionAntiAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurrentTransitionThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineIndicatorDisplayProperties m_TimeDilationDisplayProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReplayTimelineTimeDilationContext m_TimeDilationTransitionsContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReplayTimelineCurrentTransitionContext m_CurrentTransitionContext;
    
public:
    UReplayTimelineTransition();
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyHoverOrSelectStateChanged(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    void OnDelayedUpdateTransitionForKey(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OverrideGenerateTimeDilationIndicatorDilatedTimes(UPARAM(Ref) FReplayTimelineTimeDilationData& _data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DrawTimeDilationTransitions();
    
};

