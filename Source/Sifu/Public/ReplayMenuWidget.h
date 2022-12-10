#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "HandleInput.h"
#include "OnOverlayChangedSignatureDelegate.h"
#include "InputAction.h"
#include "ReplayMenuWidget.generated.h"

class ABaseReplayController;
class UReplayUIModeUserWidget;
class UReplayScreenshotUserWidget;
class UReplayUIModeDB;
class UReplaySubMenuWidget;

UCLASS(EditInlineNew)
class SIFU_API UReplayMenuWidget : public USCUserWidget, public IHandleInput {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayScreenshotUserWidget> m_ScreenshotWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayUIModeUserWidget> m_HideUIModeClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UReplayScreenshotUserWidget* m_ScreenshotWidget;
    
    UPROPERTY(EditDefaultsOnly)
    UReplayUIModeDB* m_UIModeDB;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UReplayUIModeUserWidget*> m_UIModes;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UReplayUIModeUserWidget*> m_UIOverlays;
    
    UPROPERTY(BlueprintAssignable)
    FOnOverlayChangedSignature m_OnOverlayChange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ABaseReplayController* m_Controller;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UReplaySubMenuWidget*> m_SubMenus;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUpdateUIModeOnMenuPushed;
    
public:
    UReplayMenuWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreOverlay();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PushSubMenu(UReplaySubMenuWidget* _subMenu, UReplaySubMenuWidget* _parentSubMenu);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PopSubMenuIfTop(const UReplaySubMenuWidget* _subMenu);
    
    UFUNCTION(BlueprintCallable)
    UReplaySubMenuWidget* BPF_PopSubMenu();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PopMenuAndAllChildren(const UReplaySubMenuWidget* _subMenu);
    
    UFUNCTION(BlueprintPure)
    UReplaySubMenuWidget* BPF_PeekSubMenu() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveCurrentUIMode();
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsSubMenuOnTop(const UReplaySubMenuWidget* _subMenu) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsSubMenuOnStack(const UReplaySubMenuWidget* _subMenu) const;
    
    UFUNCTION(BlueprintPure)
    UReplayUIModeUserWidget* BPF_GetNextOverlay() const;
    
public:
    UFUNCTION(BlueprintPure)
    UReplayUIModeUserWidget* BPF_GetCurrentUIMode() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_EnterUIMode(TSubclassOf<UReplayUIModeUserWidget> _UIModeClass);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CycleUIOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseAllSubMenu(const UReplaySubMenuWidget* _parent);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnTakeScreenshotPressed();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnRemovedFromParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuRightPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuOptionsPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuLeftPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuInputPressed(InputAction _eAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuBackKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuActionPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnLeaveModePressed();
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_OnHideUIPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnExportPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnCycleUIModePressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnCharacterSettingsPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnCameraSettingsPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnApplyFocusPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAnyInputConsumed();
    
    
    // Fix for true pure virtual functions not being implemented
};

