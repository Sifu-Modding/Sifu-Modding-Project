#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InterchangeableData.h"
#include "InterchangeableInputData.generated.h"

UCLASS()
class SIFU_API UInterchangeableInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInterchangeableData> m_Inputs;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseActiveSubInputLifeSpan;
    
    UInterchangeableInputData();
};

