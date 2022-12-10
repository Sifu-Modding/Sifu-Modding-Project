#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "IsSubMenuAvailableDelegateDelegate.h"
#include "ReplaySubMenuWidget.generated.h"

class UReplaySubMenuWidget;
class UCustomWidgetNavigation;
class UReplayMenuWidget;

UCLASS(EditInlineNew)
class SIFU_API UReplaySubMenuWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCustomWidgetNavigation> m_CustomWidgetNavigationClass;
    
    UPROPERTY(BlueprintReadOnly)
    UCustomWidgetNavigation* m_CustomWidgetNavigation;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UReplaySubMenuWidget* m_ParentSubMenu;
    
public:
    UReplaySubMenuWidget();
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsSubMenuAvailable(const UReplaySubMenuWidget* _menu) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindIsSubMenuAvailableDelegate(const FIsSubMenuAvailableDelegate& _delegate);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemovedFromParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuPushRequest(UReplayMenuWidget* _parent, UReplaySubMenuWidget* _previousMenu, UReplaySubMenuWidget* _parentSubMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuPushed(UReplaySubMenuWidget* _previousMenu, UReplaySubMenuWidget* _parentSubMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuPopRequest(UReplayMenuWidget* _parent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuPopped();
    
};

