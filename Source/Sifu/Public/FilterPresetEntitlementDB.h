#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetEntitlementDB.generated.h"

class UFilterPresetEntryDB;

UCLASS(BlueprintType)
class SIFU_API UFilterPresetEntitlementDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Entitlement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UFilterPresetEntryDB*> m_Filters;
    
    UFilterPresetEntitlementDB();
};

