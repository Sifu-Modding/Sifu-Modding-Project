#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SCBaseUserWidget.generated.h"

class USCLevelSequence;

UCLASS(Blueprintable, EditInlineNew)
class SCCORE_API USCBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USCBaseUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCinematicStarted(const USCLevelSequence* _inSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCinematicFinished(const USCLevelSequence* _inSequence);
    
};

