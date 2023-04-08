#pragma once
#include "CoreMinimal.h"
#include "RemappingClasses.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FRemappingClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;
    
    FRemappingClasses();
};

