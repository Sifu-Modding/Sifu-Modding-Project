#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OutfitData.generated.h"

class UMaterialInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FOutfitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UMaterialInstance>> m_OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_props;
    
    SIFU_API FOutfitData();
};

