#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EDirections.h"
#include "EFightingActionState.h"
#include "EOrderType.h"
#include "PlayerStatesStatus.h"
#include "UpdateCameraBlackboardBTService.generated.h"

class AFightingCharacter;
class UASMComponent;
class UAttackComponent;
class UCameraComponentThird;
class UPlayerFightingComponent;

UCLASS(Blueprintable)
class SIFU_API UUpdateCameraBlackboardBTService : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
    UUpdateCameraBlackboardBTService();

    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerStatesStatus BPF_GetPlayerStateStatus(EFightingActionState _eFightingState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerFightingComponent* BPF_GetPlayerFightingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDirections BPF_GetCharacterSideOnScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponentThird* BPF_GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* BPF_GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UASMComponent* BPF_GetASMComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderStarting(EOrderType _eOrderType, uint8 _orderID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderEnding(EOrderType _eOrderType, uint8 _orderID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ExitState(EFightingActionState _eStateEntered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EnterState(EFightingActionState _eStateEntered);
    
};

