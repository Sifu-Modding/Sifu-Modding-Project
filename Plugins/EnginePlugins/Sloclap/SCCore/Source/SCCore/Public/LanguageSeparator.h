#pragma once
#include "CoreMinimal.h"
#include "LanguageSeparator.generated.h"

USTRUCT(BlueprintType)
struct FLanguageSeparator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Separators;
    
    SCCORE_API FLanguageSeparator();
};

