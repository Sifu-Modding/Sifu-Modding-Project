#pragma once
#include "CoreMinimal.h"
#include "SaveSettings.h"
#include "GameOptionMappingRange.h"
#include "WGSaveSettings.generated.h"

class UCharacterBuildDB;

UCLASS(Blueprintable, Config=Engine)
class SIFU_API UWGSaveSettings : public USaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharacterBuildDB> m_DefaultBuild;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOptionMappingRange m_GameOptionValue[43];
    
    UWGSaveSettings();

};

