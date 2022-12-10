#pragma once
#include "CoreMinimal.h"
#include "ReplaySizeManagement.h"
#include "ReplayCurrentRecordingData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FReplayCurrentRecordingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int64 m_iRecordingArchiveSize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iRecordingDuration;
    
    UPROPERTY(BlueprintReadOnly)
    FReplaySizeManagement m_SizeManagementData;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fBytesPerSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fTimeleftInSecondsAvg;
    
public:
    FReplayCurrentRecordingData();
};

