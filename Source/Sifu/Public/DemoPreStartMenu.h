#pragma once
#include "CoreMinimal.h"
#include "BaseStartMenu.h"
#include "DemoPreStartMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDemoPreStartMenu : public UBaseStartMenu {
    GENERATED_BODY()
public:
    UDemoPreStartMenu();
private:
    UFUNCTION()
    void OnRetryLoadProfile();
    
    UFUNCTION()
    void OnContinueWithoutSaving();
    
    UFUNCTION()
    void OnConfirmGeneric();
    
    UFUNCTION()
    void OnConfirmCancel();
    
    UFUNCTION()
    void OnAudioLanguageSetup();
    
};

