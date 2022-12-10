#pragma once
#include "CoreMinimal.h"
#include "SCGameMode.h"
#include "EFightingState.h"
#include "DamageInfos.h"
#include "ThePlainesGameMode.generated.h"

class AController;
class APlayerController;

UCLASS(NonTransient)
class SIFU_API AThePlainesGameMode : public ASCGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTwoControllersDynamicDelegate, AController*, _killer, AController*, _victim, const FDamageInfos&, _damageInfos);
    
    UPROPERTY(BlueprintAssignable)
    FTwoControllersDynamicDelegate OnCharacterKilled;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAITraversalInfo;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsTraversalUniversalLockEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_fTraversalLockTime;
    
    UPROPERTY(EditAnywhere)
    float m_fTraversalCooldownPerAI;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_ForcedPlayerStart;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAllowInitialOverlappingAllButQueryOnly;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fGMDamageMultiplier;
    
public:
    AThePlainesGameMode();
    UFUNCTION(Exec)
    void KillAllAis();
    
    UFUNCTION(BlueprintPure)
    TArray<APlayerController*> BPF_GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceRestartPlayerAtStartNull(AController* _controller);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsStartupGameMode() const;
    
    UFUNCTION(Exec)
    void AllAisSetFightingState(EFightingState _eFightingState, float _fDuration);
    
};

