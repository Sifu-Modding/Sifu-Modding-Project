#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InterchangeableData.h"
#include "InterchangeableInputData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInterchangeableInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangeableData> m_Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseActiveSubInputLifeSpan;
    
    UInterchangeableInputData();
};

