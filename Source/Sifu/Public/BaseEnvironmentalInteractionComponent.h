#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetOrderStructTakedown.h"
#include "EPushObstacleReaction.h"
#include "BaseEnvironmentalInteractionComponent.generated.h"

class AFightingCharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBaseEnvironmentalInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImpact, AFightingCharacter*, _takenDown, const FNetOrderStructTakedown&, _takedownInfos);
    
    UPROPERTY(BlueprintAssignable)
    FOnImpact m_OnImpact;
    
    UPROPERTY(EditAnywhere)
    bool m_bActive;
    
    UPROPERTY(EditAnywhere)
    EPushObstacleReaction m_eReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiAllowedInteractionTypes;
    
    UBaseEnvironmentalInteractionComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTakedownStarted(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(const AFightingCharacter* _Instigator, const AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanTakeDown(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
};

