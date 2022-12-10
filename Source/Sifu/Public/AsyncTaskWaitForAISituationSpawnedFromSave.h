#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSpawnedDelegate.h"
#include "AsyncTaskWaitForAISituationSpawnedFromSave.generated.h"

class UAsyncTaskWaitForAISituationSpawnedFromSave;
class AAISituationActor;

UCLASS()
class SIFU_API UAsyncTaskWaitForAISituationSpawnedFromSave : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSpawned AllSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpawned NothingToSpawn;
    
    UAsyncTaskWaitForAISituationSpawnedFromSave();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForAISituationSpawnedFromSave* BPF_WaitForAISituationToSpawnFromSave(const TArray<AAISituationActor*> _situationsToWaitFor);
    
};

