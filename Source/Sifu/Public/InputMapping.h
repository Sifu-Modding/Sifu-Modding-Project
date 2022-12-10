#pragma once
#include "CoreMinimal.h"
#include "InputMappingData.h"
#include "InputMapping.generated.h"

USTRUCT(BlueprintType)
struct FInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FInputMappingData m_MappingData;
    
    SIFU_API FInputMapping();
};

