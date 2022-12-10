#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemsDB.generated.h"

class UBaseItemData;

UCLASS(BlueprintType)
class SIFU_API UItemsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UBaseItemData*> m_Items;
    
    UItemsDB();
};

