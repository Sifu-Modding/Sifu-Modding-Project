#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingKeySlotContainer.h"
#include "InputMappingData.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FInputMappingKeySlotContainer> m_Slots;
    
    SIFU_API FInputMappingData();
};

