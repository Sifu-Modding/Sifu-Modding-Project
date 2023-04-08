#pragma once
#include "CoreMinimal.h"
#include "EPhoneme.h"
#include "LipSyncPhonemeInPhrase.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncPhonemeInPhrase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhoneme Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag;
    
    SCCORE_API FLipSyncPhonemeInPhrase();
};

