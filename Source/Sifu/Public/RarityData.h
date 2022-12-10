#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RarityData.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct SIFU_API FRarityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterial* m_Material;
    
    FRarityData();
};

