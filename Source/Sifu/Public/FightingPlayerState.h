#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "EJoinMethod.h"
#include "FightingPlayerState.generated.h"

class UDamageType;
class AFightingPlayerState;

UCLASS()
class AFightingPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNameChanged);
    
    UPROPERTY(BlueprintAssignable)
    FNameChanged OnPlayerNameChanged;
    
private:
    UPROPERTY(Replicated, Transient)
    EJoinMethod m_eJoinMethod;
    
    UPROPERTY(Replicated, Transient)
    uint16 m_uDispatcherToken;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TeamNumber)
    int32 m_iTeamNumber;
    
    UPROPERTY(Replicated, Transient)
    int32 m_iNumKills;
    
    UPROPERTY(Replicated, Transient)
    int32 m_iNumDeaths;
    
    UPROPERTY(Replicated, Transient)
    uint8 m_uiRespawnZoneId;
    
    UPROPERTY()
    uint8 m_bQuitter: 1;
    
public:
    AFightingPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_TeamNumber();
    
    UFUNCTION()
    void OnRep_SchoolLevel();
    
public:
    UFUNCTION(Client, Reliable)
    void InformAboutKill(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState);
    
    UFUNCTION(BlueprintPure)
    int32 GetKills() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastDeath(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTeam(int32 _iTeam);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetTeam() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDeaths() const;
    
};

