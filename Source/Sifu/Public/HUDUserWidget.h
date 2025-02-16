#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EMenuEnum.h"
#include "SCUserWidget.h"
#include "HUDUserWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UHUDUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleWithMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMenuEnum> m_HideWithMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSearchMenusInStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleInTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleInTrainingOnly;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> m_WidgetsToOffset;
    
public:
    UHUDUserWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_UpdateHUDOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_VisibilityChangedFromMenu(ESlateVisibility _eNewVibility);
    
};

