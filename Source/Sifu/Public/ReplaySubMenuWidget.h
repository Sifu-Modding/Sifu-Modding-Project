#pragma once
#include "CoreMinimal.h"
#include "IsSubMenuAvailableDelegateDelegate.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ReplaySubMenuWidget.generated.h"

class UCustomWidgetNavigation;
class UReplayMenuWidget;
class UReplaySubMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplaySubMenuWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomWidgetNavigation> m_CustomWidgetNavigationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomWidgetNavigation* m_CustomWidgetNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySubMenuWidget* m_ParentSubMenu;
    
public:
    UReplaySubMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSubMenuAvailable(const UReplaySubMenuWidget* _menu) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindIsSubMenuAvailableDelegate(const FIsSubMenuAvailableDelegate& _delegate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemovedFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuPushRequest(UReplayMenuWidget* _parent, UReplaySubMenuWidget* _previousMenu, UReplaySubMenuWidget* _parentSubMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuPushed(UReplaySubMenuWidget* _previousMenu, UReplaySubMenuWidget* _parentSubMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuPopRequest(UReplayMenuWidget* _parent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuPopped();
    
};

