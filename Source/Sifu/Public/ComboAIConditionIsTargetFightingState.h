#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionOnState.h"
#include "EComboAIConditionOnState.h"
#include "EFightingState.h"
#include "ComboAIConditionIsTargetFightingState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsTargetFightingState : public UComboAIConditionOnState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboAIConditionOnState m_eDesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlyHighestFightingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseStateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStateValidDuration;
    
public:
    UComboAIConditionIsTargetFightingState();

};

