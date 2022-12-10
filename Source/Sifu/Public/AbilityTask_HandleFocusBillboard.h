#pragma once
#include "CoreMinimal.h"
#include "TargetForSlotsEnumHandler.h"
#include "HandleFocusBillboardDelegateDelegate.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_HandleFocusBillboard.generated.h"

class UAbilityTask_HandleFocusBillboard;
class UGameplayAbility;
class AAimingBillboardActor;

UCLASS()
class SIFU_API UAbilityTask_HandleFocusBillboard : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHandleFocusBillboardDelegate m_OnVitalPointSelected;
    
    UAbilityTask_HandleFocusBillboard();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleFocusBillboard* BPF_HandleFocusBillboard(UGameplayAbility* _owningAbility, const FTargetForSlotsEnumHandler& _focusTargetSlot);
    
    UFUNCTION(BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedVitalPoint();
    
    UFUNCTION(BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedBillboard();
    
};

