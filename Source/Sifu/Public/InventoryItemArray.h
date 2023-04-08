#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "InventoryItemArray.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_ItemList;
    
    SIFU_API FInventoryItemArray();
};

