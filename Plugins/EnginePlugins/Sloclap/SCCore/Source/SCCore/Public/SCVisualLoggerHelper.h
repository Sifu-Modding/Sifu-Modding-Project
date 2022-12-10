#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCVisualLoggerHelper.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCVisualLoggerHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCVisualLoggerHelper();
    UFUNCTION(BlueprintCallable)
    static bool BPF_TakeVisualLoggerSnapshot(const FString& _fileName, FText& _outError);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetVisualLoggerPaused(bool _bPaused);
    
};

