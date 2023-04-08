#pragma once
#include "CoreMinimal.h"
#include "ArenaBatchProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FArenaBatchProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentStarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTotalStarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUnlocked;
    
    SIFU_API FArenaBatchProgressionInfo();
};

