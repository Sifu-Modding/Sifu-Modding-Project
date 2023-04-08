#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayInfoUpdateTime.h"
#include "ReplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ReplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ReplayFriendlyNameLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ReplayFriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayInfoUpdateTime m_LastReplayEditorUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iChangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iReplayVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iSizeInBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsCorrupted;
    
    SIFU_API FReplayInfo();
};

