#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMapping.h"
#include "InputMappingGroup.h"
#include "InputMappingProfileContextDB.generated.h"

UCLASS(Blueprintable)
class UInputMappingProfileContextDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingGroup> m_MappingGroups;
    
    UInputMappingProfileContextDB();
    UFUNCTION(BlueprintCallable)
    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
    
};

