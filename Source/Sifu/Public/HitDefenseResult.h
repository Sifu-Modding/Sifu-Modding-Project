#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "HitDefenseResult.generated.h"

class USpecialAbilityPropertyDB;

USTRUCT(BlueprintType)
struct FHitDefenseResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOrderType m_eDefenseOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiDefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHitDismissed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResultRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsPlayingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialAbilityPropertyDB* m_DB;
    
    SIFU_API FHitDefenseResult();
};

