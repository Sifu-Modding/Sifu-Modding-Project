#pragma once
#include "CoreMinimal.h"
#include "SCPhonemeDictionaryRow.h"
#include "SCPhonemeFromChineseDictionaryRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPhonemeFromChineseDictionaryRow : public FSCPhonemeDictionaryRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Pinyin;
    
    FSCPhonemeFromChineseDictionaryRow();
};

