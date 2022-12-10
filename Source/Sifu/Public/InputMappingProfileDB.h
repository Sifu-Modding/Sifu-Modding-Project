#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputContext.h"
#include "InputMappingProfileDB.generated.h"

class UInputMappingPresets;
class UInputMappingProfileUIData;
class UInputMappingProfileContextDB;

UCLASS(BlueprintType)
class UInputMappingProfileDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bGamepadMapping;
    
    UPROPERTY(EditAnywhere)
    UInputMappingPresets* m_PresetDB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInputMappingProfileUIData* m_UIData;
    
   /* UPROPERTY(EditAnywhere)
    TMap<InputContext, UInputMappingProfileContextDB*> m_MappingPerContext;*/
    
    UInputMappingProfileDB();
};

