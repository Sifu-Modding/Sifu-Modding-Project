#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSpawnedDelegate.h"
#include "AsyncTaskWaitForAISituationSpawnedFromSave.generated.h"

class AAISituationActor;
class UAsyncTaskWaitForAISituationSpawnedFromSave;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskWaitForAISituationSpawnedFromSave : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawned AllSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawned NothingToSpawn;
    
    UAsyncTaskWaitForAISituationSpawnedFromSave();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForAISituationSpawnedFromSave* BPF_WaitForAISituationToSpawnFromSave(const TArray<AAISituationActor*> _situationsToWaitFor);
    
};

