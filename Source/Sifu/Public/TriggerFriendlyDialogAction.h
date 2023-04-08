#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "TriggerFriendlyDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTriggerFriendlyDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerFriendlyDialogAction();
};

