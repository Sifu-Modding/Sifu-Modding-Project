#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EInventorySearchOrder.h"
#include "SortMethodData.h"
#include "SortMethodDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API USortMethodDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortMethodData m_SortMethodData[10];
    
    USortMethodDB();
    UFUNCTION(BlueprintCallable)
    void BPF_GetSortMethodData(EInventorySearchOrder _sortMethod, FSortMethodData& _outSortMethodData);
    
};

