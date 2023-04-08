#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ReplayLoadingScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Replay)
class SIFU_API UReplayLoadingScreenWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iZIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsHidding;
    
public:
    UReplayLoadingScreenWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyHideCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHideRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHideCancelled();
    
};

