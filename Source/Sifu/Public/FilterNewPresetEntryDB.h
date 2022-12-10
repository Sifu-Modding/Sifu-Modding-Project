#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetData.h"
#include "FilterNewPresetEntryDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFilterNewPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFilterPresetData m_Data;
    
    UFilterNewPresetEntryDB();
};

