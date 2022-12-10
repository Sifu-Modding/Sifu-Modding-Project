#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OutfitData.generated.h"

class USkeletalMesh;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FOutfitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> m_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, TSoftObjectPtr<UMaterialInstance>> m_OverrideMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDataTableRowHandle m_props;
    
    SIFU_API FOutfitData();
};

