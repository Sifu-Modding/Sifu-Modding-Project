#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "HandleFocusBillboardDelegateDelegate.h"
#include "TargetForSlotsEnumHandler.h"
#include "AbilityTask_HandleFocusBillboard.generated.h"

class AAimingBillboardActor;
class UAbilityTask_HandleFocusBillboard;
class UGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAbilityTask_HandleFocusBillboard : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandleFocusBillboardDelegate m_OnVitalPointSelected;
    
    UAbilityTask_HandleFocusBillboard();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleFocusBillboard* BPF_HandleFocusBillboard(UGameplayAbility* _owningAbility, const FTargetForSlotsEnumHandler& _focusTargetSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedVitalPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedBillboard();
    
};

