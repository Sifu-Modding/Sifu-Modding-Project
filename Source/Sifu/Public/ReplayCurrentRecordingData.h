#pragma once
#include "CoreMinimal.h"
#include "ReplaySizeManagement.h"
#include "ReplayCurrentRecordingData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FReplayCurrentRecordingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iRecordingArchiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iRecordingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplaySizeManagement m_SizeManagementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBytesPerSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeleftInSecondsAvg;
    
public:
    FReplayCurrentRecordingData();
};

