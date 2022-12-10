#pragma once
#include "CoreMinimal.h"
#include "ReplayGameplayCameraRecordEventDelegateDelegate.h"
#include "UObject/Object.h"
#include "ReplayGameplayCameraRecordEventProxy.generated.h"

UCLASS(BlueprintType)
class UReplayGameplayCameraRecordEventProxy : public UObject {
    GENERATED_BODY()
public:
    UReplayGameplayCameraRecordEventProxy();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_DeserializeGameplayCameraEvent(const UObject* _worldContextObject, FReplayGameplayCameraRecordEventDelegate _callback);
    
};

