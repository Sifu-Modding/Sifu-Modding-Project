#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "TriggerFightDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTriggerFightDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToFight;
    
    UTriggerFightDialogAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};

