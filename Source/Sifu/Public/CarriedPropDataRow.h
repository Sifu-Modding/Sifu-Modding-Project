#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "CarriedPropDataRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FCarriedPropDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LocatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_ClassToSpawn;
    
    FCarriedPropDataRow();
};

