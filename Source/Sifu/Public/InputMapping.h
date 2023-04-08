#pragma once
#include "CoreMinimal.h"
#include "InputMappingData.h"
#include "InputMapping.generated.h"

USTRUCT(BlueprintType)
struct FInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingData m_MappingData;
    
    SIFU_API FInputMapping();
};

