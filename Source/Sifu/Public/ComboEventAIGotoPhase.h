#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeSoftLink.h"
#include "ComboEvent.h"
#include "SCAITicketEnum.h"
#include "ComboEventAIGotoPhase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboEventAIGotoPhase : public UComboEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeSoftLink m_Link;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCAITicketEnum> m_ResetTickets;
    
public:
    UComboEventAIGotoPhase();
};

