#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionOnState.h"
#include "EAITargetOrderState.h"
#include "EOrderType.h"
#include "ComboAIConditionIsTargetOrderState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsTargetOrderState : public UComboAIConditionOnState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAITargetOrderState m_eDesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseOrderDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStateValidDuration;
    
public:
    UComboAIConditionIsTargetOrderState();

};

