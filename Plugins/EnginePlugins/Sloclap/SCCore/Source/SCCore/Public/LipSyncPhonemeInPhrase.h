#pragma once
#include "CoreMinimal.h"
#include "EPhoneme.h"
#include "LipSyncPhonemeInPhrase.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncPhonemeInPhrase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EPhoneme Value;
    
    UPROPERTY()
    uint8 Flag;
    
    SCCORE_API FLipSyncPhonemeInPhrase();
};

