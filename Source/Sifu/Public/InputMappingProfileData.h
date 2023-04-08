#pragma once
#include "CoreMinimal.h"
#include "InputContext.h"
#include "InputMappingData.h"
#include "InputMappingGroup.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<InputContext, FInputMappingGroup> m_MappingPerContext;
    
    SIFU_API FInputMappingProfileData();
};

