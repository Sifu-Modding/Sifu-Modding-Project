#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputContext.h"
#include "InputMappingProfileDB.generated.h"

class UInputMappingPresets;
class UInputMappingProfileContextDB;
class UInputMappingProfileUIData;

UCLASS(Blueprintable)
class UInputMappingProfileDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGamepadMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingPresets* m_PresetDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputMappingProfileUIData* m_UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<InputContext, UInputMappingProfileContextDB*> m_MappingPerContext;
    
    UInputMappingProfileDB();
};

