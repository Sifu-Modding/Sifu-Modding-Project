#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "SwitchPhaseDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USwitchPhaseDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_NewPhase;
    
    USwitchPhaseDialogAction();
};

