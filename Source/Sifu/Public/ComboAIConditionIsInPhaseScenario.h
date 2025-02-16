#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "AIPhaseNodeSoftLink.h"
#include "AIPhaseNodeSoftLinkByMCDomination.h"
#include "ComboAIConditionIsInPhaseScenario.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsInPhaseScenario : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIPhaseNodeSoftLink> m_PhasesToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIPhaseNodeSoftLinkByMCDomination> m_Phases;
    
    UComboAIConditionIsInPhaseScenario();

};

