#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlotContainer.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingData.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingKeySlotContainer> m_Slots;
    
    SIFU_API FInputMappingData();
};

