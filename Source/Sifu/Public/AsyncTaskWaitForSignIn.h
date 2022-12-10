#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskWaitForSignIn.generated.h"

class UAsyncTaskWaitForSignIn;
class UObject;

UCLASS()
class UAsyncTaskWaitForSignIn : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskWaitForSignInCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForSignInCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForSignInCompleted OnFail;
    
    UAsyncTaskWaitForSignIn();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForSignIn* BPF_WaitForSignIn(UObject* _menu);
    
};

