#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "SwitchPhaseDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API USwitchPhaseDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NewPhase;
    
    USwitchPhaseDialogAction();

};

