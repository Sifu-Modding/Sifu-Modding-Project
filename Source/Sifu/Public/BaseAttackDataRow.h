#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BaseAttackDataRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBaseAttackDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_RealAttackName;
    
    FBaseAttackDataRow();
};

