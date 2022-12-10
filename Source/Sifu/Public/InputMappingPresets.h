#pragma once
#include "CoreMinimal.h"
#include "InputMappingData.h"
#include "Engine/DataAsset.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingPresets.generated.h"

UCLASS()
class UInputMappingPresets : public UDataAsset {
    GENERATED_BODY()
public:
   /* UPROPERTY(EditAnywhere)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;*/
    
    UInputMappingPresets();
};

