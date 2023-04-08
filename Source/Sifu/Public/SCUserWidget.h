#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "SCBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EUIInputModes.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.generated.h"

class AFightingCharacter;
class AFightingPlayerController;
class ASCPlayerController;
class UAttackComponent;
class UCharacterHealthComponent;
class UDefenseComponent;
class UMenuDB;
class UMenuWidget;
class UPanelWidget;
class USCAbilitySystemComponent;
class USCUserWidget;
class USocialComponent;
class USocialManager;
class UStatsComponent;
class UThePlainesGameInstance;
class UWidgetAnimation;
class UWidgetData;
class UWorld;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class SIFU_API USCUserWidget : public USCBaseUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVisibilityChanged);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInitializeWidgetDelegate, USCUserWidget*, _widget);
    DECLARE_DYNAMIC_DELEGATE_RetVal(UWidgetData*, FGetDataDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChanged m_OnVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChanged m_OnHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_ActiveVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetDataDelegate m_GetDataDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitializeWidgetDelegate m_InitializeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetData* m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetData> m_DataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eControllerInputModeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eMouseInputModeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGiveFocusIfNeededWithKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eFocusedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnGiveFocusButtonOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyUIInputModeChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceGamepadUI;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateDataOnCharacterProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateDataOnVisible;
    
public:
    USCUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsVisibleInTree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayerLeaderInPvpAndHasAllies() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCursorNavigationEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_GiveFocusIfNeeded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIInputModes BPF_GetUIInputMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UThePlainesGameInstance* BPF_GetThePlainesGameInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USocialManager* BPF_GetSocialManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USocialComponent* BPF_GetSocialComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCPlayerController* BPF_GetPlayerController() const;
    
   /* UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatform BPF_GetPlatform() const;*/
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetParentMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuDB* BPF_GetMenuDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterHealthComponent* BPF_GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingPlayerController* BPF_GetFightingPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDefenseComponent* BPF_GetDefenseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetData* BPF_GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* BPF_GetCurrentWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* BPF_GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCAbilitySystemComponent* BPF_GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CheckControllerHasAnyFocus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UnbindFromDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReturnToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnPawnChanged(AFightingCharacter* _character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGetFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnCultureChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GiveFocus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidgetData* BPE_CreateData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BindToDelegates(bool _bPawnOnly);
    
};

