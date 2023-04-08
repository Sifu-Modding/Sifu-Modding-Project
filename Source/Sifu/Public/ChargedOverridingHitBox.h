#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChargedOverridingHitBox.generated.h"

USTRUCT(BlueprintType)
struct FChargedOverridingHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitBoxToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_HitRow;
    
    SIFU_API FChargedOverridingHitBox();
};

