#pragma once
#include "CoreMinimal.h"
#include "ReplayCutInfo.generated.h"

class UReplayKey;

USTRUCT(BlueprintType)
struct FReplayCutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayKey* m_FirstKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayKey* m_SecondKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayKey* m_CurrentKey;
    
    SIFU_API FReplayCutInfo();
};

