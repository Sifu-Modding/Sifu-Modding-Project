#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EReplayKeyTypeFlag.h"
#include "FilterProperties.h"
#include "OnReplayKeyEventDelegate.h"
#include "ReplayKeyData.h"
#include "ReplayTimelineModel.generated.h"

class UReplayKey;

UCLASS(Blueprintable, Config=Replay)
class SIFU_API UReplayTimelineModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimelineRecalcDilatedTimeSignature, int32, iRecalcStartIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyAddedSignature, UReplayKey*, _key, bool, _bCanSelectKey);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnKeyAddedSignature m_OnKeyAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnReplayKeyEvent m_OnKeyRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTimelineRecalcDilatedTimeSignature m_OnRecalcDilatedTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ChosenMusicForExport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMusicBackgroundMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplayKey*> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterProperties m_FilterProperties;
    
public:
    UReplayTimelineModel();

    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyLocationData(UReplayKey* _key, const FVector& _vLocation, const FQuat& _qRotation);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyData(UReplayKey* _key, const FReplayKeyData& _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMusicForExport(FName _wantedMusic);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMusicBackgroundMuted(const bool _bIsMuted);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RecalcDilatedTimes(int32 _iStartingIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMusicBackgroundMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLastKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsFirstKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsBoundaryKey(int32 _iIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasUndoStateAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasRedoStateAvailable() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasKey(int32 _iKeyIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetPreviousKeyWithCameraTransition(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetPreviousKeyOfType(const UReplayKey* _key, const EReplayKeyTypeFlag _eType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetPreviousKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetNextKeyWithCameraTransition(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetNextKeyOfType(const UReplayKey* _key, const EReplayKeyTypeFlag _eType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetNextKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UReplayKey*> BPF_GetKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetKeyAtKeyFrameIndex(int32 _iKeyFrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayKey* BPF_GetKey(int32 _iIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetCurrentMusicForExport() const;
    
};

