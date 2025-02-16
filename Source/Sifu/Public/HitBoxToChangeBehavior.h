#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OverrideHitBoxBehavior.h"
#include "HitBoxToChangeBehavior.generated.h"

USTRUCT(BlueprintType)
struct FHitBoxToChangeBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_TargetHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideHitBoxBehavior m_HitboxBehavior;
    
    SIFU_API FHitBoxToChangeBehavior();
};

