#pragma once
#include "CoreMinimal.h"
#include "ComboEvent.h"
#include "SCTriggerableActionsComboEvent.generated.h"

class USCAITriggerableActions;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API USCTriggerableActionsComboEvent : public UComboEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USCAITriggerableActions*> m_ActionsToTrigger;
    
public:
    USCTriggerableActionsComboEvent();
};

