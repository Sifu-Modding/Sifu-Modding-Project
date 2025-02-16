#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "SCGameMode.h"
#include "DamageInfos.h"
#include "EFightingState.h"
#include "ThePlainesGameMode.generated.h"

class AController;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class SIFU_API AThePlainesGameMode : public ASCGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTwoControllersDynamicDelegate, AController*, _killer, AController*, _victim, const FDamageInfos&, _damageInfos);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoControllersDynamicDelegate OnCharacterKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideAITraversalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsTraversalUniversalLockEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalCooldownPerAI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ForcedPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowInitialOverlappingAllButQueryOnly;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGMDamageMultiplier;
    
public:
    AThePlainesGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void KillAllAis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerController*> BPF_GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceRestartPlayerAtStartNull(AController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_TryGetOverrideGenderAndOutfit(ECharacterGender& _eOutGender, int32& _iOutOutfitIndex, bool& _bOutEnableOutfitPropSpawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_TryGetOverrideAge(int32& _iOutAge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsStartupGameMode() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllAisSetFightingState(EFightingState _eFightingState, float _fDuration);
    
};

