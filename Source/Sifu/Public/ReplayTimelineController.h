#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCDelegate.h"
#include "SCDynamicDelegateDelegate.h"
#include "EReplayKeyTypeFlag.h"
#include "OnTimeDilationChangedSignatureDelegate.h"
#include "ReplayTimelineController.generated.h"

class UReplayCutManagement;
class UReplayKey;
class UReplayTimelineModel;

UCLASS(Blueprintable)
class SIFU_API UReplayTimelineController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast m_OnModelReset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayCutManagement* m_CutManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayTimelineModel* m_Model;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDilationChangedSignature m_OnTimeDilationChanged;
    
public:
    UReplayTimelineController();

    UFUNCTION(BlueprintCallable)
    void BPF_SaveKeysWithCallback(const FSCDynamicDelegate& _onModelSaved);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveKeys();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTransitionContext();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetModelWithCallback(const FSCDynamicDelegate& _onModelSaved);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetModel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetFocusTargetTransitionContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyWithCameraTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const;
    
};

