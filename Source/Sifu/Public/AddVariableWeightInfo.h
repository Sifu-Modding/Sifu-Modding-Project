#pragma once
#include "CoreMinimal.h"
#include "AddVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FAddVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirror;
    
    SIFU_API FAddVariableWeightInfo();
};

