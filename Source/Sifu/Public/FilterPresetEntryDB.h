#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetData.h"
#include "FilterPresetEntryDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFilterPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterPresetData m_Data;
    
    UFilterPresetEntryDB();
};

