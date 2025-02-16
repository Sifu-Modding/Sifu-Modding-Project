#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SCDelegate.h"
#include "CharacterProgressionReward.h"
#include "CoopGroup.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ECycleDirection.h"
#include "EDangerStates.h"
#include "EGameOptionTypes.h"
#include "EMenuEnum.h"
#include "EQuadrantTypes.h"
#include "ERelationshipTypes.h"
#include "InputAction.h"
#include "InteractionTextStruct.h"
#include "MenuReferenceWithRequiredTags.h"
#include "MenuStackInfos.h"
#include "SCPlayerController.h"
#include "Templates/SubclassOf.h"
#include "FightingPlayerController.generated.h"

class AAISpawner;
class AActor;
class AController;
class AFightingCharacter;
class AInteractiveObject;
class ASkillTree;
class UASMDetectionComponent;
class UCharacterProgressionUnlockDB;
class UEquipmentSelectionData;
class UInteractionObjectComponent;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMenuWidget;
class UPanelWidget;
class UPickUpMenu;
class UPopupWidget;
class UTargetableWidgetUpdaterComponent;
class UTexture2D;
class UUserWidget;
class UWidgetPoolComponent;

UCLASS(Blueprintable)
class SIFU_API AFightingPlayerController : public ASCPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRelationshipChanged, AActor*, _shifter, AActor*, _shiftTarget, ERelationshipTypes, previousRelation, ERelationshipTypes, _eNewRelation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProgressUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnInitializedDynamic, AFightingCharacter*, _pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWasKilled, AFightingCharacter*, _victim, AFightingCharacter*, _deathInstigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchToFromPhotomode, bool, _bInPhotomode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionChangedDynamicDelegate, EGameOptionTypes, eGameOptionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAFKWarningActivated, bool, _bActivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropItem, AController*, _discarder);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentMenuChanged, EMenuEnum, _ePrevMenu, EMenuEnum, _eNewMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCloseIngameMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeMenuPage, ECycleDirection, _eDirection);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionChangedDynamicDelegate OnOptionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentMenuChanged OnCurrentMenuChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_InteractionLockText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_InteractionUseLockText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkillTree* m_MenuSkillTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowAltAttackStartQuadrant;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropItem DropItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMenuPage OnChangeMenuPage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnInitializedDynamic OnPawnInitializedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWasKilled OnPawnWasKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseIngameMenu OnMenuClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast OnGiveInitialControlToPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchToFromPhotomode OnSwitchToFromPhotomode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAppIsBackgrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bEnvDeathRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_MenuIconCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisplayAttackLearning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMenuEnum> m_DisabledMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideNonInteractableObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuEnum, FMenuReferenceWithRequiredTags> m_MapMenuClassesSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_MenuAnimationsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMenuEnum> m_eMenuListPreventingInGameMenu;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuWidget* m_MenuInstances[52];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMenuStackInfos> m_MenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_OutlineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopupWidget* m_PopupYesNo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAFKWarningActivated OnAFKWarningActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeSinceLastNonRedundantUserInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_MenuAnimationsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_EquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetableWidgetUpdaterComponent* m_TagetableWigetUpdaterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASMDetectionComponent* m_ASMDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetPoolComponent* m_WidgetPoolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPickUpMenu> m_PickUpMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewTimerHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewTimerScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_WaterMarkBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_WaterMarkScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCharacterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInteractiveObject> m_CairnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollectionFXVisualParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EmissiveMultiplierMPCParameterName;
    
public:
    AFightingPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWaterMark();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInteractionDetectionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SuicideAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide(float _fDelay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateError(const FString& _error);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateClientReturnToMainMenu(const FString& _reason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowQuadrant(uint8 _uiParam);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetOptionValue(FName _optionType, float _fOptionValue);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealth(float _fHP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SessionTimeManagerActivateDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseInterractiveObject(bool _bSuccess, UInteractionObjectComponent* _componentUsed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicideAll();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetEnvDeathRespawn(bool _bValue);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendLocalCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFirstRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemovePlayer();
    
private:
    UFUNCTION(BlueprintCallable)
    void PawnDestructionOver(AActor* _destroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 uiNewIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProgressionUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, UCharacterProgressionUnlockDB* _unlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPickUpDestroyed(UInteractionObjectComponent* _component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNeedUpdateFromGameUserSettings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboLastAttack(EQuadrantTypes newQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboChangedQuadrant(EQuadrantTypes oldQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInteractionObjectChanged(UInteractionObjectComponent* _objectComp, bool _bNewComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAltAttack(EQuadrantTypes newQuadrant, uint8 _uiCurrentComboIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Mute(bool bMute);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveFocusToGameViewport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCameraOffsetAt(bool _bActivate, float _fRatio);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugToggleFollowPlayer(int32 _iPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpeedForceZ(bool _bActivate, float _fZValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ComboEnded(EQuadrantTypes newQuadrant);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendNewCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendEntireCoopGroup(const TArray<FCoopGroup>& _coopGroup, const FCoopGroup& _coopGroupReturnToPVE);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRespawnLocalAI(AAISpawner* _spawner);
    
    UFUNCTION(Client, Unreliable)
    void ClientRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(Client, Reliable)
    void ClientFirstRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RestartMatch();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveAllyHeal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckAttackAnimations();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ValidationReceived(bool _bResult);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_UnlockAllEmotes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetEmoteLock(bool _bLock, const FName& _emoteName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmissiveParamOnPawn(float _fParamValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentMenu(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMenuFromStack(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable, Exec)
    UMenuWidget* BPF_PushMenu(EMenuEnum _eMenuEnum, UPanelWidget* _container);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenu(bool _bRestoreFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMenuInStack(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMenuEnabled(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInGameMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSpawnedAtFirstStart() const;
    
    UFUNCTION(BlueprintCallable)
    UWidgetPoolComponent* BPF_GetWidgetPoolComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetWantRespawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetVirtualCursorEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetTopMenuInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuEnum BPF_GetTopMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTargetableWidgetUpdaterComponent* BPF_GetTagetableWigetUpdaterComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UPopupWidget* BPF_GetPopupYesNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetMenuInstance(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuEnum BPF_GetCurrentMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractionObjectComponent() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_EnterSpectatorMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableVirtualCursor(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableInGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableInGameMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugForcePerfectLink(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugForceAttackQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugAutoTargetAttackTicketAI(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClosePickUpMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearMenuStack();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CacheMenuIcons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ActivateHitDetailsDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TryQuitBadCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ToggleDebugMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_ShouldEnablePostProcessComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RestartAsked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PawnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUsedHealStone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSetInteractiveObjectComponent(UInteractionObjectComponent* _newInteractionObjectComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReceiveAllyHeal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnComboEditorClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MenuEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GameInitialized(bool bHideLoadingScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeEditorQuadrantState(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BakeAttackAnimations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateHitIgnorance(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCameraAimDebug(bool _bActivate);
    
};

