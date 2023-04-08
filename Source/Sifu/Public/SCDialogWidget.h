#pragma once
#include "CoreMinimal.h"
#include "SCConversationInteractiveChoice.h"
#include "SCConversationRule.h"
#include "SCDialogData.h"
#include "SCUserWidget.h"
#include "SCDialogWidget.generated.h"

class USCDialogComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API USCDialogWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHandleShowSubtitleOption;
    
public:
    USCDialogWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAllDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsRuleFulfilled(const FSCConversationRule& _rule);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InteractiveDialogTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DialogSelected(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_AreRulesFulfilled(const TArray<FSCConversationRule>& _rules);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAllDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowBlackBarsRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnNextSegmentHasChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDialogSegmentCompleted(USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDialogCompleted(USCDialogComponent* _dialogLauncher);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InteractiveSequenceStarted(const FSCConversationInteractiveChoice& _choice);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InteractiveDialogInterrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DialogLaunched(USCDialogComponent* _dialogLauncher, const FSCDialogData& _dialogData, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DialogCanceled(USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
    
};

