#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "ButtonAction.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "ButtonUserWidget.generated.h"

class UButtonUserWidget;

UCLASS(EditInlineNew)
class SIFU_API UButtonUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidgetSimpleDelegate, UButtonUserWidget*, _button);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetSelectedDelegate, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetRightClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetInputActionDelegate, UButtonUserWidget*, _button, InputAction, _eInput);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidgetDeselectedDelegate, UButtonUserWidget*, _button);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonActionExecuteDelegate, UButtonUserWidget*, _button, const FButtonAction&, _action);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FButtonActionEnabledDelegate, const UButtonUserWidget*, _button, const FButtonAction&, _action);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBindableButtonUserWidgetSimpleDelegate, UButtonUserWidget*, _button);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetInputActionDelegate, UButtonUserWidget*, _button, InputAction, _eInput);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    
    UPROPERTY(EditAnywhere)
    FButtonActionEnabledDelegate m_IsActionEnabledDelegate;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetDelegate m_OnFocusReceived_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetDelegate m_OnFocusLost_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetClickDelegate m_OnClick_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetInputActionDelegate m_OnInputActionPressed_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableNavigationDelegate m_OnNavigation_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetSimpleDelegate m_OnHoldStarted_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetSimpleDelegate m_OnHoldCanceled_Bindable;
    
    UPROPERTY(EditAnywhere)
    FBindableButtonUserWidgetSimpleDelegate m_OnHoldSuccess_Bindable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetDelegate m_OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetDelegate m_OnFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetClickDelegate m_OnClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetRightClickDelegate m_OnRightClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetInputActionDelegate m_OnInputActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetSelectedDelegate m_OnSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetDeselectedDelegate m_OnDeselect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetNavigationDelegate m_OnNavigation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetSimpleDelegate m_OnHoldStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetSimpleDelegate m_OnHoldCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonUserWidgetSimpleDelegate m_OnHoldSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush m_DefaultStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush m_MouseOverStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush m_MouseDownStateBrush;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseFocusStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush m_FocusStateBrush;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSlateBrush m_CurrentStateBrush;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> m_eClickMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fHoldDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bFocusOnVisible;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action1;
    
    UPROPERTY(EditAnywhere)
    FButtonActionExecuteDelegate m_OnExecuteAction1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action2;
    
    UPROPERTY(EditAnywhere)
    FButtonActionExecuteDelegate m_OnExecuteAction2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FButtonAction m_Action3;
    
    UPROPERTY(EditAnywhere)
    FButtonActionExecuteDelegate m_OnExecuteAction3;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsClickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFocusOnMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLoseFocusOnMouseLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSelectOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSelectOnNavigationFocus;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eSelectedVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eDeselectedVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eMouseOverVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_eMouseOutVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsSelected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bPlayClickSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bPlayRightClickSound;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsMouseOver;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsMouseDown;
    
public:
    UButtonUserWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_SetSelected(bool _bSelected, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsActionEnabled(const FButtonAction& _action) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsSelected();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetHoldProgress() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRightClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnInputActionPressed(InputAction _eAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDeselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnClicked();
    
};

