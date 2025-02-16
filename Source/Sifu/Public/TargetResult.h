#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "TargetResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTargetResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType m_eActionType;
    
    SIFU_API FTargetResult();
};

