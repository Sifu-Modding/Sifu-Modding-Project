#pragma once
#include "CoreMinimal.h"
#include "ArenaBatchProgressionInfo.h"
#include "ArenaProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FArenaProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentStarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTotalStarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArenaBatchProgressionInfo> m_ArenaBatchesInfo;
    
    SIFU_API FArenaProgressionInfo();
};

