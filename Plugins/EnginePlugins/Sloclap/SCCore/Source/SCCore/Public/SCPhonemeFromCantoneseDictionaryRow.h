#pragma once
#include "CoreMinimal.h"
#include "SCPhonemeDictionaryRow.h"
#include "SCPhonemeFromCantoneseDictionaryRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPhonemeFromCantoneseDictionaryRow : public FSCPhonemeDictionaryRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Pinyin;
    
    FSCPhonemeFromCantoneseDictionaryRow();
};

