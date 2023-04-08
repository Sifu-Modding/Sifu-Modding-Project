#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnReplayKeyDataUpdateDelegate.h"
#include "OnReplayKeyEventDelegate.h"
#include "OnReplayKeyHoveredUpdateDelegate.h"
#include "OnReplayKeyIndexUpdateDelegate.h"
#include "OnReplayKeySelectionUpdateDelegate.h"
#include "OnReplayKeyTimeUpdateDelegate.h"
#include "OnReplayKeyTransitionUpdateDelegate.h"
#include "ReplayKeyData.h"
#include "ReplayKey.generated.h"

UCLASS(Blueprintable)
class SIFU_API UReplayKey : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyData m_Data;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyEvent m_OnDelete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyEvent m_OnPostDelete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyIndexUpdate m_OnIndexUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyDataUpdate m_OnDataUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyTransitionUpdate m_OnTransitionUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeySelectionUpdate m_OnSelectionUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyHoveredUpdate m_OnHoveredUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyTimeUpdate m_OnTimeUpdate;
    
    UReplayKey();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasActiveBlend() const;
    
};

