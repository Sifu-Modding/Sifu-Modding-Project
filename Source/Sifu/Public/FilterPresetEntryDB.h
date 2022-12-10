#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetData.h"
#include "FilterPresetEntryDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFilterPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFilterPresetData m_Data;
    
    UFilterPresetEntryDB();
};

