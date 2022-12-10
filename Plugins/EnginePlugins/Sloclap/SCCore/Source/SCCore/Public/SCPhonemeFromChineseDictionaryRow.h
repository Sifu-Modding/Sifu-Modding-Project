#pragma once
#include "CoreMinimal.h"
#include "SCPhonemeDictionaryRow.h"
#include "SCPhonemeFromChineseDictionaryRow.generated.h"

USTRUCT()
struct SCCORE_API FSCPhonemeFromChineseDictionaryRow : public FSCPhonemeDictionaryRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Pinyin;
    
    FSCPhonemeFromChineseDictionaryRow();
};

