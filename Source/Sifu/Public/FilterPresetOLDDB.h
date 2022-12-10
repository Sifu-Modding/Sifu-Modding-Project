#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetOLDDB.generated.h"

class UFilterPresetEntryDB;

UCLASS(BlueprintType)
class SIFU_API UFilterPresetOLDDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UFilterPresetEntryDB*> m_Filters;
    
    UFilterPresetOLDDB();
};

