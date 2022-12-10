#pragma once
#include "CoreMinimal.h"
#include "SCGameState.h"
#include "SpawnerPerZone.h"
#include "SCDelegate.h"
#include "EDangerStates.h"
#include "EGameModeTypes.h"
#include "ThePlainesGameState.generated.h"

UCLASS()
class SIFU_API AThePlainesGameState : public ASCGameState {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnMatchHasStarted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnMatchHasEnded;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnLeavingMap;*/
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 m_iNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool m_bFriendlyFire;
    
    UPROPERTY(Replicated, Transient)
    uint8 m_uiLastHostZone;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRepNumTeam)
    int32 m_iNumTeams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShouldGiveXPOnKill;
    
private:
    UPROPERTY(Replicated, Transient)
    bool m_bHasRunOnce;
    
    UPROPERTY(Replicated, Transient)
    TArray<FSpawnerPerZone> m_ToSpawnFrom;
    
    UPROPERTY(EditDefaultsOnly)
    EDangerStates m_eThresholdDangerState;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReviveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeathRespawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReviveLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeathLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoomClearedLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVanishTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanGoDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRespawnTimeNoDown;
    
public:
    AThePlainesGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRepNumTeam();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPvPGameMode() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimeBeforeVanishActive() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetRespawnTimeNoDown() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EGameModeTypes BPF_GetGameModeType() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDownTime() const;
    
};

