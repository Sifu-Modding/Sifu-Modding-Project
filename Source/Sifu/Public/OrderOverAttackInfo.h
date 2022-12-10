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
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    FHitDefenseResult m_DefenseResult;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadOnly)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_uiOrderID;
    
    SIFU_API FOrderOverAttackInfo();
};

