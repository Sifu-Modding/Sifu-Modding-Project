#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "EALBinaryOperation.h"
#include "EALPriority.h"
#include "AbilityTask_PushAvailabilityLayers.generated.h"

class UAbilityTask_PushAvailabilityLayers;
class UAvailabilityLayerData;
class UGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAbilityTask_PushAvailabilityLayers : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UAbilityTask_PushAvailabilityLayers();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayerWithContext(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority, bool _bPushContext, EALPriority _eContextPriority);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayer(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority);
    
};

