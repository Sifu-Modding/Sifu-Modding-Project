#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnCultureSwitchedDelegate.h"
#include "AsyncTaskSwitchAudioCulture.generated.h"

class UAsyncTaskSwitchAudioCulture;
class UObject;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskSwitchAudioCulture : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCultureSwitched CultureSwitched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCultureSwitched CultureSwitchFailed;
    
    UAsyncTaskSwitchAudioCulture();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwitchAudioCulture* BPF_SwitchAudioCulture(UObject* _context, const FString& _cultureName);
    
};

