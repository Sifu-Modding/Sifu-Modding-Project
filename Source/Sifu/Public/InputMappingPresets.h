#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingData.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingPresets.generated.h"

UCLASS(Blueprintable)
class UInputMappingPresets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UInputMappingPresets();

};

