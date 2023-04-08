#pragma once
#include "CoreMinimal.h"
#include "LipSyncPhonemeInPhrase.h"
#include "LipSyncPhonemeInPhraseArray.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncPhonemeInPhraseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSyncPhonemeInPhrase> phonemeArray;
    
    SCDIALOGMANAGERPLUGIN_API FLipSyncPhonemeInPhraseArray();
};

