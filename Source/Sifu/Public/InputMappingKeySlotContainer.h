#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlot.h"
#include "InputPresetsEnumHandler.h"
#include "SaveGameInputMappingKeySlot.h"
#include "InputMappingKeySlotContainer.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingKeySlotContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_SubInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingKeySlot m_Key;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveGameInputMappingKeySlot m_SaveGameKey;
    
public:
    SIFU_API FInputMappingKeySlotContainer();
};

