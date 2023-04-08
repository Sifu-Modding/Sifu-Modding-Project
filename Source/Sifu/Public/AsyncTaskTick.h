#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskTick.generated.h"

class UAsyncTaskTick;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskTick : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskTickDel, UAsyncTaskTick*, _task, float, _fDeltaTime, float, _fProgress, float, _fTotalTime);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskTickDel OnTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskTickDel OnFinished;
    
    UAsyncTaskTick();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTick* BPF_Tick(UAsyncTaskTick* _existingTask, UObject* _menu, float _fFrequency, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Stop();
    
};

