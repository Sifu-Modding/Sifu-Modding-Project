#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CarriedProps.generated.h"

USTRUCT(BlueprintType)
struct FCarriedProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_props;
    
    SIFU_API FCarriedProps();
};

