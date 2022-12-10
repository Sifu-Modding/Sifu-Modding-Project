#pragma once
#include "CoreMinimal.h"
#include "EWidgetLifeCycle.h"
#include "SCUserWidget.h"
#include "HandleInput.h"
#include "EGameModeTypes.h"
#include "AvailabilityLayerPushParams.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ECycleDirection.h"
#include "EMenuTransitions.h"
#include "EMenuEnum.h"
#include "InputAction.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECoopGameModeAnswerStatus.h"
#include "MenuWidget.generated.h"

class AActor;
class UWidgetAnimation;
class UUserWidget;
class UBaseNotification;

UCLASS(EditInlineNew)
class SIFU_API UMenuWidget : public USCUserWidget, public IHandleInput {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTransitionFinished);
    
    UPROPERTY(BlueprintAssignable)
    FOnTransitionFinished m_OnTransitionFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreKeyFlushOnFocus;
    
protected:
    UPROPERTY(EditAnywhere)
    EWidgetLifeCycle m_eLifeCycle;
    
    UPROPERTY(EditAnywhere)
    bool m_bPushInputContext;
    
    UPROPERTY(EditAnywhere)
    FAvailabilityLayerPushParams m_availabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bBlockParentMenuInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bBlockInputsWhenUIInputDisabled;
    
    UPROPERTY(EditAnywhere)
    bool m_bPopAvailabilityLayersOnlyOnHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHideOnPushedOut;
    
    UPROPERTY(EditAnywhere)
    bool m_bHideOnPopOut;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility m_CurrentMenuVisibility;
    
    UPROPERTY(EditAnywhere)
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
    UFUNCTION(BlueprintPure)
    bool BPF_IsCurrentMenu();
    
public:
    UFUNCTION(BlueprintPure)
    int32 BPF_GetZOrder();
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetLeftStickValue() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsInTransitionAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_EnableInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_DisableInputs();
    
    UFUNCTION(BlueprintPure)
    bool BPF_AreInputsEnabled();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OpenFromNotification(UBaseNotification* _notification);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnTrainingEditPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnToggleStatsButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnStartTrainingPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnSortingInventoryButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnRenameButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnRemoveButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnPasteButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuPreviewPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuActionSecondaryPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnMenuActionSecondaryHoldButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnInputAction(InputAction eAction);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGroupMemberNewAnswer(const FUniqueNetIdRepl& _groupMemberUniqueId, AActor* _memberActor, ECoopGameModeAnswerStatus _eNewAnswer, EGameModeTypes _eGameModeType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnEditButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnCopyButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnBackButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnAltPageNavigation(ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnActionHoldButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnActionButtonPressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

