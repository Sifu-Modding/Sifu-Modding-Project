#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplaySizeManagement.h"
#include "OnTaskStateChangedSignatureDelegate.h"
#include "EReplayOpenState.h"
#include "ReplayManagement.generated.h"

class UReplaySaveGame;

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplayManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UReplaySaveGame* m_ReplaySaveGame;
    
    UPROPERTY(BlueprintAssignable)
    FOnTaskStateChangedSignature m_OnTaskStateChanged;
    
public:
    UReplayManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_SetReplayOpenState(const EReplayOpenState _eOpenState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetReplayEditorMetaData(const FString& _replayID);
    
protected:
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCurrentReplay(const FString& _replayID) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_HasSpaceForNewReplay(const FReplaySizeManagement& _inSizeManagement) const;
    
};

