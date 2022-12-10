#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECoopGameModeAnswerStatus.h"
#include "CoopGroupMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCoopGroupMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUniqueNetIdRepl m_UniqueNetId;
    
    UPROPERTY()
    ECoopGameModeAnswerStatus m_eAnswerStatus;
    
    FCoopGroupMemberInfo();
};

