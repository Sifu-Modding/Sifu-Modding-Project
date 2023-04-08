#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDynamicDelegate__DelegateSignature -FallbackName=SCDynamicDelegateDelegate
#include "EReplayOpenState.h"
#include "OnTaskStateChangedSignatureDelegate.h"
#include "ReplaySizeManagement.h"
#include "ReplayManagement.generated.h"

class UReplaySaveGame;

UCLASS(Blueprintable, Config=Replay)
class SIFU_API UReplayManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplaySaveGame* m_ReplaySaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskStateChangedSignature m_OnTaskStateChanged;
    
public:
    UReplayManagement();
    UFUNCTION(BlueprintCallable)
    void OnStreamingCompleteQuitReplayManagement();
    
    UFUNCTION(BlueprintCallable)
    void OnQuitReplayManagementMenu(bool _bIsPlayingReplay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetReplayOpenState(const EReplayOpenState _eOpenState);
    
   /* UFUNCTION(BlueprintCallable)
    void BPF_ResetReplayEditorMetaDataWithCallback(const FString& _replayID, const FSCDynamicDelegate& _callback);*/
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetReplayEditorMetaData(const FString& _replayID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentReplay(const FString& _replayID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSpaceForNewReplay(const FReplaySizeManagement& _inSizeManagement) const;
    
};

