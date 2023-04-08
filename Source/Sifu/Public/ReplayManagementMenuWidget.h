#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "OnQuitReplayManagementMenuDelegate.h"
#include "ReplayInfo.h"
#include "ReplayListInfo.h"
#include "ReplayManagementMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayManagementMenuWidget : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuitReplayManagementMenu m_OnQuitReplayManagementMenu;
    
public:
    UReplayManagementMenuWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_PlayReplay(const FReplayInfo& _info);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnumerateStreams();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EditReplay(const FReplayInfo& _info);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteReplays(const FReplayListInfo& _infos);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteReplay(const FReplayInfo& _info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStreamsEnumerated(bool _bError, const FReplayListInfo& _replayInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStreamsDeletedProgress(bool _bError, const FReplayListInfo& _initialState, const FReplayListInfo& _currentState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStreamsDeleted(bool _bError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStreamDeleted(bool _bError);
    
};

