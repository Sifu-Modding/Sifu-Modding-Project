#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "DisabledTargetInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDisabledTargetInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType m_eActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTargettableWhenAlone;
    
    FDisabledTargetInfos();
};

