#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSwapGenderDelegate.h"
#include "ECharacterGender.h"
#include "AsyncTaskSwapGender.generated.h"

class UPlayerFightingComponent;
class UAsyncTaskSwapGender;

UCLASS()
class SIFU_API UAsyncTaskSwapGender : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSwapGender OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnSwapGender OnFail;
    
    UAsyncTaskSwapGender();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwapGender* BPF_SwapGender(UPlayerFightingComponent* _playerComponent, ECharacterGender _eNewGender);
    
};

