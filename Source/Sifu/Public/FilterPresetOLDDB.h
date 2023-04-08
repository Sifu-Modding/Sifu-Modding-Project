#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetOLDDB.generated.h"

class UFilterPresetEntryDB;

UCLASS(Blueprintable)
class SIFU_API UFilterPresetOLDDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFilterPresetEntryDB*> m_Filters;
    
    UFilterPresetOLDDB();
};

