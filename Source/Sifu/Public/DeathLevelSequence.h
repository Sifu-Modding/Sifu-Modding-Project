#pragma once
#include "CoreMinimal.h"
#include "EDeathSequenceEvents.h"
#include "WGLevelSequence.h"
#include "DeathLevelSequence.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDeathLevelSequence : public UWGLevelSequence {
    GENERATED_BODY()
public:
    UDeathLevelSequence();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyEvent(EDeathSequenceEvents _event);
    
};

