#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPhonemeDictionary.h"
#include "SCPhonemeDictionaryRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPhonemeDictionaryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhonemeDictionary> m_Phonemes;
    
    FSCPhonemeDictionaryRow();
};

