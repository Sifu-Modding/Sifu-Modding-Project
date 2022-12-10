#pragma once
#include "CoreMinimal.h"
#include "ReplaySizeManagement.generated.h"

USTRUCT(BlueprintType)
struct FReplaySizeManagement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int64 m_iTotalSpaceOccupied;
    
    UPROPERTY(BlueprintReadOnly)
    int64 m_iTotalSpaceAvailable;
    
    UPROPERTY(BlueprintReadOnly)
    int64 m_iTotalMaxSpace;
    
    UPROPERTY(BlueprintReadOnly)
    int64 m_iMaxReplaySize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iCurrentReplaySlotCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iMaxReplaySlotCount;
    
    SIFU_API FReplaySizeManagement();
};

