#pragma once
#include "CoreMinimal.h"
#include "InputMapping.h"
#include "InputAction.h"
#include "InputMappingGroup.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TMap<InputAction, FInputMapping> m_Mapping;
    
    SIFU_API FInputMappingGroup();
};

