#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EMenuEnum.h"
#include "HUDUserWidget.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class SIFU_API UHUDUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bVisibleWithMenus;
    
    UPROPERTY(EditAnywhere)
    TArray<EMenuEnum> m_HideWithMenus;
    
    UPROPERTY(EditAnywhere)
    bool m_bSearchMenusInStack;
    
    UPROPERTY(EditAnywhere)
    bool m_bVisibleInTraining;
    
    UPROPERTY(EditAnywhere)
    bool m_bVisibleInTrainingOnly;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UWidget*> m_WidgetsToOffset;
    
public:
    UHUDUserWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateHUDOffset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_VisibilityChangedFromMenu(ESlateVisibility _eNewVibility);
    
};

