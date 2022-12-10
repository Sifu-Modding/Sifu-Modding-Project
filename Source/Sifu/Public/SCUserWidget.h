#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "EUIInputModes.h"
#include "SCUserWidget.generated.h"

class USCUserWidget;
class UWidgetData;
class UWidgetAnimation;
class UWorld;
class UPanelWidget;
class UMenuDB;
class UStatsComponent;
class UThePlainesGameInstance;
class USocialManager;
class USocialComponent;
class ASCPlayerController;
class UMenuWidget;
class UCharacterHealthComponent;
class USCAbilitySystemComponent;
class AFightingPlayerController;
class AFightingCharacter;
class UDefenseComponent;
class UAttackComponent;

UCLASS(EditInlineNew, Config=Game)
class SIFU_API USCUserWidget : public USCBaseUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVisibilityChanged);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInitializeWidgetDelegate, USCUserWidget*, _widget);
    DECLARE_DYNAMIC_DELEGATE_RetVal(UWidgetData*, FGetDataDelegate);
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FVisibilityChanged m_OnVisible;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FVisibilityChanged m_OnHidden;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESlateVisibility m_ActiveVisibility;
    
    UPROPERTY(EditAnywhere)
    FGetDataDelegate m_GetDataDelegate;
    
    UPROPERTY(EditAnywhere)
    FInitializeWidgetDelegate m_InitializeDelegate;
    
    UPROPERTY(EditAnywhere)
    UWidgetData* m_Data;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWidgetData> m_DataClass;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility m_eControllerInputModeVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility m_eMouseInputModeVisibility;
    
    UPROPERTY(EditAnywhere)
    bool m_bGiveFocusIfNeededWithKeyboard;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility m_eFocusedVisibility;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnGiveFocusButtonOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bNotifyPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bNotifyUIInputModeChanged;
    
    UPROPERTY(Config)
    bool m_bForceGamepadUI;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUpdateDataOnCharacterProgression;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateDataOnVisible;
    
public:
    USCUserWidget();
protected:
    UFUNCTION()
    void OnDataUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetData(UWidgetData* _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayAnimationFromCurrentTime(UWidgetAnimation* _inAnimation, int32 _iNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdatedToChildren(UPanelWidget* _root);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdated();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsVisibleInTree();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPlayerLeaderInPvpAndHasAllies() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsCursorNavigationEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_GiveFocusIfNeeded();
    
protected:
    UFUNCTION(BlueprintPure)
    EUIInputModes BPF_GetUIInputMode() const;
    
public:
    UFUNCTION(BlueprintPure)
    UThePlainesGameInstance* BPF_GetThePlainesGameInstance() const;
    
    UFUNCTION(BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent() const;
    
    UFUNCTION(BlueprintPure)
    USocialManager* BPF_GetSocialManager() const;
    
    UFUNCTION(BlueprintPure)
    USocialComponent* BPF_GetSocialComponent() const;
    
    UFUNCTION(BlueprintPure)
    ASCPlayerController* BPF_GetPlayerController() const;
    
   /* UFUNCTION(BlueprintPure)
    EPlatform BPF_GetPlatform() const;*/
    
    UFUNCTION(BlueprintPure)
    UMenuWidget* BPF_GetParentMenu() const;
    
    UFUNCTION(BlueprintPure)
    UMenuDB* BPF_GetMenuDB();
    
    UFUNCTION(BlueprintPure)
    UCharacterHealthComponent* BPF_GetHealthComponent() const;
    
    UFUNCTION(BlueprintPure)
    AFightingPlayerController* BPF_GetFightingPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UDefenseComponent* BPF_GetDefenseComponent() const;
    
    UFUNCTION(BlueprintPure)
    UWidgetData* BPF_GetData();
    
    UFUNCTION(BlueprintPure)
    UWorld* BPF_GetCurrentWorld() const;
    
    UFUNCTION(BlueprintPure)
    UAttackComponent* BPF_GetAttackComponent() const;
    
    UFUNCTION(BlueprintPure)
    USCAbilitySystemComponent* BPF_GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CheckControllerHasAnyFocus() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UnbindFromDelegates();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnVisible();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReturnToPool();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnPawnChanged(AFightingCharacter* _character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGetFromPool();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnDataUpdated();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnCultureChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GiveFocus();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    UWidgetData* BPE_CreateData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BindToDelegates(bool _bPawnOnly);
    
};

