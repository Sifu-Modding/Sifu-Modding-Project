#pragma once
#include "CoreMinimal.h"
#include "SCDelegate.h"
#include "SCGameState.h"
#include "EDangerStates.h"
#include "EGameModeTypes.h"
#include "SpawnerPerZone.h"
#include "ThePlainesGameState.generated.h"

UCLASS(Blueprintable)
class SIFU_API AThePlainesGameState : public ASCGameState {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnMatchHasStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnMatchHasEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnLeavingMap;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiLastHostZone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepNumTeam, meta=(AllowPrivateAccess=true))
    int32 m_iNumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldGiveXPOnKill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHasRunOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerPerZone> m_ToSpawnFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDangerStates m_eThresholdDangerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeathRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReviveLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeathLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRoomClearedLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVanishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanGoDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTimeNoDown;
    
public:
    AThePlainesGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRepNumTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPvPGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeBeforeVanishActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetRespawnTimeNoDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EGameModeTypes BPF_GetGameModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDownTime() const;
    
};

