#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "StopLowStructureOnPrefightAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UStopLowStructureOnPrefightAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActorKey;
    
    UStopLowStructureOnPrefightAction();
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetActorOptions() const;
    
};

