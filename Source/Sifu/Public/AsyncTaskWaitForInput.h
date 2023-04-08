#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ESCBlendType.h"
#include "InputAction.h"
#include "OnInputWaitDelegate.h"
#include "Templates/SubclassOf.h"
#include "TestInputAdditionalValidationDelegateDelegate.h"
#include "AsyncTaskWaitForInput.generated.h"

class UAsyncTaskWaitForInput;
class UCurveFloat;
class UObject;
class USCGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskWaitForInput : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputWait Validated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputWait Skipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputWait Launched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputWait SkippedOnError;
    
    UAsyncTaskWaitForInput();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreezeExtraValidationDelegate(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, FTestInputAdditionalValidationDelegate _additionalDelegate, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreeze(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
};

