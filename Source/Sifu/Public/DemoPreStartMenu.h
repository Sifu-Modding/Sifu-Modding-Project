#pragma once
#include "CoreMinimal.h"
#include "BaseStartMenu.h"
#include "DemoPreStartMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDemoPreStartMenu : public UBaseStartMenu {
    GENERATED_BODY()
public:
    UDemoPreStartMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnRetryLoadProfile();
    
    UFUNCTION(BlueprintCallable)
    void OnContinueWithoutSaving();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmGeneric();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnAudioLanguageSetup();
    
};

