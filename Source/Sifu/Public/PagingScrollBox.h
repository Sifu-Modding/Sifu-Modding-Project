#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TableWidget.h"
#include "TableWidget.h"
#include "Components/ScrollBox.h"
#include "TableWidget.h"
#include "TableWidget.h"
#include "Input/Events.h"
#include "PagingScrollBox.generated.h"

class UWidget;
class UUserWidget;
class USCUserWidget;
class UButtonUserWidget;

UCLASS()
class UPagingScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemVisibleDelegate, int32, _iDataIndex, UUserWidget*, _cell);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemPreviewButtonPressed);
    
    UPROPERTY(BlueprintAssignable)
    UTableWidget::FItemClickDelegate m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    UTableWidget::FItemRightClickDelegate m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable)
    UTableWidget::FItemDelegate m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable)
    UTableWidget::FItemDelegate m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    UTableWidget::FItemSelectedDelegate m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FItemVisibleDelegate m_OnItemVisible;
    
    UPROPERTY(BlueprintAssignable)
    FItemPreviewButtonPressed m_ItemPreviewButtonPressed;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 m_iLoadedRowCount;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USCUserWidget> m_CellClass;
    
    UPROPERTY(Instanced, Transient)
    TArray<UWidget*> m_Headers;
    
public:
    UPagingScrollBox();
protected:
    UFUNCTION()
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION()
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION()
    void OnItemPreviewButtonPressedCallback();
    
protected:
    UFUNCTION()
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION()
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetWidgetFromSectionDataIndex(int32 _iSection, int32 _iDataIndex);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetWidgetFromDataIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetWidgetDataIndex(const int32 iRow, const int32 iCol) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRowDataIndex(const int32 iRow) const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetLastVisibleWidgetFromSection(int32 _iSection);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetLastVisibleCell();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetItemCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDataIndexFromWidget(UUserWidget* _widget);
    
};

