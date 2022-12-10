#pragma once
#include "CoreMinimal.h"
#include "EGameFlowTravelType.h"
#include "GameFlow.h"
#include "ESCGameInstanceState.h"
#include "SCDelegate.h"
#include "EWorldTravelLoadSaveStrategy.h"
#include "GameplayTagContainer.h"
#include "EMenuEnum.h"
#include "GameplayTagContainer.h"
#include "EWGGameFlowMapOption.h"
#include "WGGameFlow.generated.h"

class ULevelStreaming;

UCLASS()
class SIFU_API UWGGameFlow : public UGameFlow {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSCOnSessionStateChanged, ESCGameInstanceState, _previous, ESCGameInstanceState, _current);
    
  /*  UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnNextMapPreloadOver;*/
    
protected:
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> m_pendingLoadingLevels;
    
public:
    UWGGameFlow();
    UFUNCTION()
    void TravelToPendingMapInternal(EWorldTravelLoadSaveStrategy _eLoadSaveStrategy, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    
protected:
    UFUNCTION()
    void OnControllerReconnectConfirm();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration, bool _bKeepCheats);
    
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
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPendingTravel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToNextMap(bool _bSaveBefore, bool _bReloadSaveBefore);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetFirstPlayableMapTagName() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCurrentMapTag() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentHideoutIndex() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CurrentMapHasMapOption(EWGGameFlowMapOption _eMapOption) const;
    
};

