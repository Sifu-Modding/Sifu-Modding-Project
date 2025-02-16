#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "AvailabilityLayerPushParams.h"
#include "ECoopGameModeAnswerStatus.h"
#include "ECycleDirection.h"
#include "EGameModeTypes.h"
#include "EMenuEnum.h"
#include "EMenuTransitions.h"
#include "EWidgetLifeCycle.h"
#include "HandleInput.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "MenuWidget.generated.h"

class AActor;
class UBaseNotification;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMenuWidget : public USCUserWidget, public IHandleInput {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTransitionFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionFinished m_OnTransitionFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreKeyFlushOnFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetLifeCycle m_eLifeCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPushInputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerPushParams m_availabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockParentMenuInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockInputsWhenUIInputDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPopAvailabilityLayersOnlyOnHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideOnPushedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideOnPopOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_CurrentMenuVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iZOrder;
    
public:
    UMenuWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetMapTagName(FName _mapTagName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_PlayTransitionAnimation(UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayBackSound();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetZOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetLeftStickValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsInTransitionAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_EnableInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_DisableInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreInputsEnabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OpenFromNotification(UBaseNotification* _notification);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnTrainingEditPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnToggleStatsButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnStartTrainingPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnSortingInventoryButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnRenameButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnRemoveButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnPasteButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuPreviewPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuActionSecondaryPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnMenuActionSecondaryHoldButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnInputAction(InputAction eAction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGroupMemberNewAnswer(const FUniqueNetIdRepl& _groupMemberUniqueId, AActor* _memberActor, ECoopGameModeAnswerStatus _eNewAnswer, EGameModeTypes _eGameModeType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnEditButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnCopyButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnBackButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnAltPageNavigation(ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnActionHoldButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnActionButtonPressed();
    

    // Fix for true pure virtual functions not being implemented
};

