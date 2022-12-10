#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "MenuItem.generated.h"

class UWidget;
class UMenuItem;

UCLASS(EditInlineNew)
class SIFU_API UMenuItem : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWidget* m_PreviousWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWidget* m_WidgetToFocusOnCancel;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMenuItem* m_NextPanel;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bAllowSoundPlaying;
    
    UMenuItem();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnChangeNextWidget(UWidget* _widgetToHide, UWidget* _previousWidget, UWidget* _widgetToFocusOnCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCancelPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnCancelChangeWidget();
    
};

