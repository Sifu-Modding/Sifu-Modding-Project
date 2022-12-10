#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnCultureSwitchedDelegate.h"
#include "AsyncTaskSwitchAudioCulture.generated.h"

class UObject;
class UAsyncTaskSwitchAudioCulture;

UCLASS()
class SIFU_API UAsyncTaskSwitchAudioCulture : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCultureSwitched CultureSwitched;
    
    UPROPERTY(BlueprintAssignable)
    FOnCultureSwitched CultureSwitchFailed;
    
    UAsyncTaskSwitchAudioCulture();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwitchAudioCulture* BPF_SwitchAudioCulture(UObject* _context, const FString& _cultureName);
    
};

