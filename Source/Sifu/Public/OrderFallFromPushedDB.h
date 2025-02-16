#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderFallFromPushedDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderFallFromPushedDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRedirectToSlopeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeEnteringFallFromPushed;
    
    UOrderFallFromPushedDB();

};

