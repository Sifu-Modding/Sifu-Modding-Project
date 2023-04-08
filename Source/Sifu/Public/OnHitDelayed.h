#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "OnHitDelayed.generated.h"

USTRUCT(BlueprintType)
struct FOnHitDelayed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitDescription m_Hit;
    
    SIFU_API FOnHitDelayed();
};

