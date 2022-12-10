#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "RemappingSectionStruct.h"
#include "MappableInputsDB.generated.h"

class UTexture2D;

UCLASS()
class SIFU_API UMappableInputsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText m_RemappingNotificationMessages[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bKeysInSelectionAreForbidden;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_NoMappingIcon;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> m_KeysSelectionForRemapping;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> m_KeysIgnoredForRemapping;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> m_CancelRemappingKeys;
    
    UPROPERTY(EditAnywhere)
    TArray<FRemappingSectionStruct> m_MappableInputsSection;
    
    UMappableInputsDB();
};

