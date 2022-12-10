#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ReplayLoadingScreenWidget.generated.h"

UCLASS(EditInlineNew, Config=Replay)
class SIFU_API UReplayLoadingScreenWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iZIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsHidding;
    
public:
    UReplayLoadingScreenWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyHideCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHideRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHideCancelled();
    
};

