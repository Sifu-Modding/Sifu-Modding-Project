#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
#include "AIActionReaction.generated.h"

USTRUCT(BlueprintType)
struct FAIActionReaction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTestFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanCancelPendingActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlyWhenAlerted;
    
    SIFU_API FAIActionReaction();
};

