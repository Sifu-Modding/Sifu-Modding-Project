#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlot.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingNode.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPresetsEnumHandler m_Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMappingKeySlot m_KeySlot;
    
    SIFU_API FInputMappingNode();
};

