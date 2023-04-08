#pragma once
#include "CoreMinimal.h"
#include "HandleInput.h"
#include "InputAction.h"
#include "OnOverlayChangedSignatureDelegate.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ReplayMenuWidget.generated.h"

class ABaseReplayController;
class UReplayScreenshotUserWidget;
class UReplaySubMenuWidget;
class UReplayUIModeDB;
class UReplayUIModeUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayMenuWidget : public USCUserWidget, public IHandleInput {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayScreenshotUserWidget> m_ScreenshotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayUIModeUserWidget> m_HideUIModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayScreenshotUserWidget* m_ScreenshotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplayUIModeDB* m_UIModeDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReplayUIModeUserWidget*> m_UIModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReplayUIModeUserWidget*> m_UIOverlays;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlayChangedSignature m_OnOverlayChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseReplayController* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReplaySubMenuWidget*> m_SubMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplaySubMenuWidget* BPF_PeekSubMenu() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveCurrentUIMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSubMenuOnTop(const UReplaySubMenuWidget* _subMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSubMenuOnStack(const UReplaySubMenuWidget* _subMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayUIModeUserWidget* BPF_GetNextOverlay() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayUIModeUserWidget* BPF_GetCurrentUIMode() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_EnterUIMode(TSubclassOf<UReplayUIModeUserWidget> _UIModeClass);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CycleUIOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseAllSubMenu(const UReplaySubMenuWidget* _parent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnTakeScreenshotPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnRemovedFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuRightPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuOptionsPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuLeftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuInputPressed(InputAction _eAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuBackKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuActionPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnLeaveModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_OnHideUIPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnExportPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnCycleUIModePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnCharacterSettingsPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnCameraSettingsPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnApplyFocusPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAnyInputConsumed();
    
    
    // Fix for true pure virtual functions not being implemented
};

