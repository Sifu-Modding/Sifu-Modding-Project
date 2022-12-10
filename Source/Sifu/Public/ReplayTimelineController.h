#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyTypeFlag.h"
#include "UObject/Object.h"
#include "OnTimeDilationChangedSignatureDelegate.h"
#include "ReplayTimelineController.generated.h"

class UReplayKey;
class UReplayCutManagement;
class UReplayTimelineModel;

UCLASS(BlueprintType)
class SIFU_API UReplayTimelineController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayCutManagement* m_CutManagement;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineModel* m_Model;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimeDilationChangedSignature m_OnTimeDilationChanged;
    
public:
    UReplayTimelineController();
    UFUNCTION(BlueprintCallable)
    void BPF_SaveKeys();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTransitionContext();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetModel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetFocusTargetTransitionContext();
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyWithCameraTransition() const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const;
    
};

