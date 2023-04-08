#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "HitDefenseResult.h"
#include "HitRequest.h"
#include "OrderOverAttackInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOrderOverAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitDefenseResult m_DefenseResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOrderID;
    
    SIFU_API FOrderOverAttackInfo();
};

