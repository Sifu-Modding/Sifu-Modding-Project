#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "TriggerFightDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTriggerFightDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActorSentToFight;
    
    UTriggerFightDialogAction();
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetActorOptions() const;
    
};

