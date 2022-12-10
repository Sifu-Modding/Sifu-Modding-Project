#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString m_ReplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_ReplayFriendlyNameLocalized;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_ReplayFriendlyName;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime m_Date;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iChangeList;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iReplayVersion;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iLength;
    
    UPROPERTY(BlueprintReadOnly)
    int64 m_iSizeInBytes;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsCorrupted;
    
    SIFU_API FReplayInfo();
};

