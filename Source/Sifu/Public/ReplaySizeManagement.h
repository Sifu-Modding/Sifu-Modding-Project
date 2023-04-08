#pragma once
#include "CoreMinimal.h"
#include "ReplaySizeManagement.generated.h"

USTRUCT(BlueprintType)
struct FReplaySizeManagement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iTotalSpaceOccupied;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iTotalSpaceAvailable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iTotalMaxSpace;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iMaxReplaySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentReplaySlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxReplaySlotCount;
    
    SIFU_API FReplaySizeManagement();
};

