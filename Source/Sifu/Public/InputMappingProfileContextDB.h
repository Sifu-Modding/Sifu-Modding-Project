#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMapping.h"
#include "InputMappingGroup.h"
#include "InputMappingProfileContextDB.generated.h"

UCLASS()
class UInputMappingProfileContextDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInputMappingGroup> m_MappingGroups;
    
    UInputMappingProfileContextDB();
    UFUNCTION()
    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
    
};

