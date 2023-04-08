#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFightingState.h"
#include "EGuardType.h"
#include "EOrderType.h"
#include "ESpeedState.h"
#include "BaseUseCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseUseCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseUseCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFulfilled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTargetPlayingOrder(EOrderType _eOrderType, uint8& _uiOutOrderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsStaminaRatioBelow(float _fStaminaThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsHitted(EGuardType& _eOutGuardType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsHealthRatioBelow(float _fHealthThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttackIncoming(float& _fOutTimeTillStrike) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpeedState BPF_GetTargetSpeedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFightingState BPF_GetTargetFightingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetHitCount(float _fTime, EGuardType _eGuardTypeFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDistFromTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetDifficultyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDifficultyLevelGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageTaken(float _fTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFulfilled();
    
};

