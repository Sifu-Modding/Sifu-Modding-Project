#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetData.h"
#include "FilterNewPresetEntryDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFilterNewPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterPresetData m_Data;
    
    UFilterNewPresetEntryDB();

};

