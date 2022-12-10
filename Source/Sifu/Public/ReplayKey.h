#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeySelectionUpdateDelegate.h"
#include "UObject/Object.h"
#include "ReplayKeyData.h"
#include "OnReplayKeyTransitionUpdateDelegate.h"
#include "OnReplayKeyEventDelegate.h"
#include "OnReplayKeyIndexUpdateDelegate.h"
#include "OnReplayKeyDataUpdateDelegate.h"
#include "OnReplayKeyHoveredUpdateDelegate.h"
#include "OnReplayKeyTimeUpdateDelegate.h"
#include "ReplayKey.generated.h"

UCLASS(BlueprintType)
class SIFU_API UReplayKey : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyData m_Data;
    
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyEvent m_OnDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyEvent m_OnPostDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyIndexUpdate m_OnIndexUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyDataUpdate m_OnDataUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyTransitionUpdate m_OnTransitionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeySelectionUpdate m_OnSelectionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyHoveredUpdate m_OnHoveredUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyTimeUpdate m_OnTimeUpdate;
    
    UReplayKey();
protected:
    UFUNCTION(BlueprintPure)
    static bool BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_HasActiveBlend() const;
    
};

