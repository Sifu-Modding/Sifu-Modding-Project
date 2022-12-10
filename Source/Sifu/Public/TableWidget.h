#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/VerticalBox.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
#include "ButtonUserWidget.h"
#include "ButtonUserWidget.h"
#include "ECycleDirection.h"
#include "TableWidget.generated.h"

class UButtonUserWidget;
class UWidget;
class UHorizontalBox;
class UUserWidget;

UCLASS()
class UTableWidget : public UVerticalBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemSelectedDelegate, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemRightClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation, int32, _iItemIndex);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemDelegate_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomLayout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_LeftItemPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_RightItemPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_CenterItemsPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize m_ItemSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> m_ItemHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> m_ItemVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_RowPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize m_RowSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> m_RowHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> m_RowVerticalAlignment;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickDelegate m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FItemRightClickDelegate m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable)
    FItemDelegate m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable)
    FItemDelegate m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    FItemSelectedDelegate m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FItemNavigationDelegate m_OnItemNavigation;
    
    UPROPERTY(EditAnywhere)
    UButtonUserWidget::FBindableButtonUserWidgetClickDelegate m_OnItemClicked_Bindable;
    
    UPROPERTY(EditAnywhere)
    UButtonUserWidget::FBindableButtonUserWidgetDelegate m_OnItemFocused_Bindable;
    
    UPROPERTY(EditAnywhere)
    FItemDelegate_Bindable m_OnItemLostFocus_Bindable;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomNavigation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iItemsPerRow;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UHorizontalBox> m_RowWidgetClass;
    
public:
    UTableWidget();
    UFUNCTION()
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION()
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION()
    void OnItemNavigation(UButtonUserWidget* _button, EUINavigation _eNavigation);
    
    UFUNCTION()
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION(BlueprintPure)
    UButtonUserWidget* BPF_GetSelectedButton();
    
    UFUNCTION(BlueprintPure)
    UWidget* BPF_GetNextItem(UWidget* currentButton, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintCallable)
    UWidget* BPF_GetLastVisibleItem();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetItemIndex(UWidget* _item);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetItemAtIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetChildrenCount();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddItem(UUserWidget* _widget);
    
};

