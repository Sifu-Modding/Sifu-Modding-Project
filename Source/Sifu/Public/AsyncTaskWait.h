#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskWait.generated.h"

class UAsyncTaskWait;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskWait : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitDel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskWaitDel OnFinished;
    
    UAsyncTaskWait();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWait* BPF_Wait(UObject* _menu, float _fDuration);
    
};

