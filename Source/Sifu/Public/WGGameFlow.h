#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGameFlowTravelType.h"
#include "ESCGameInstanceState.h"
#include "GameFlow.h"
#include "SCDelegate.h"
#include "EMenuEnum.h"
#include "EWGGameFlowMapOption.h"
#include "EWorldTravelLoadSaveStrategy.h"
#include "WGGameFlow.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class SIFU_API UWGGameFlow : public UGameFlow {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSCOnSessionStateChanged, ESCGameInstanceState, _previous, ESCGameInstanceState, _current);
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnNextMapPreloadOver;*/
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_StoryMapTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> m_pendingLoadingLevels;
    
public:
    UWGGameFlow();
    UFUNCTION(BlueprintCallable)
    void TravelToPendingMapInternal(EWorldTravelLoadSaveStrategy _eLoadSaveStrategy, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerReconnectConfirm();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration, bool _bKeepCheats, bool _bUseDefaultSave);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestartCurrentMap();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTags();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseTag(FGameplayTag _tagToRaise);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadNextMap(bool _bForceClassicTravel);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadMap(FName _mapTag, EGameFlowTravelType _eTravelTypeWanted, EMenuEnum _eMenuToShow, FGameplayTagContainer _mapOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPendingTravel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToNextMap(bool _bWantsToSave, bool _bWantsToReloadSave, bool _bUseDefaultSave);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bWantsToSave, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bWantsToReloadSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats, bool _bUseDefaultSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetFirstPlayableMapTagName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetCurrentMapTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentHideoutIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CurrentMapHasMapOption(EWGGameFlowMapOption _eMapOption) const;
    
};

