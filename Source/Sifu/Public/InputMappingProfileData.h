#pragma once
#include "CoreMinimal.h"
#include "InputMappingGroup.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingData.h"
#include "InputContext.h"
#include "InputMappingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    bool m_IsSet;
    
   /* UPROPERTY(SaveGame)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UPROPERTY(SaveGame)
    TMap<InputContext, FInputMappingGroup> m_MappingPerContext;*/
    
    SIFU_API FInputMappingProfileData();
};

