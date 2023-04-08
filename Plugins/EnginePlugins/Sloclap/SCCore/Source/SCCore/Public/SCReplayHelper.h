#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCReplayHelper.generated.h"

class UObject;

UCLASS(Blueprintable)
class SCCORE_API USCReplayHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCReplayHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReplayRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReplayPlaying(const UObject* _worldContextObject);
    
};

