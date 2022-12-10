#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskTick.generated.h"

class UAsyncTaskTick;
class UObject;

UCLASS()
class UAsyncTaskTick : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskTickDel, UAsyncTaskTick*, _task, float, _fDeltaTime, float, _fProgress, float, _fTotalTime);
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTickDel OnTick;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTickDel OnFinished;
    
    UAsyncTaskTick();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTick* BPF_Tick(UAsyncTaskTick* _existingTask, UObject* _menu, float _fFrequency, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Stop();
    
};

