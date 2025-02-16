#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPushObstacleReaction.h"
#include "NetOrderStructTakedown.h"
#include "BaseEnvironmentalInteractionComponent.generated.h"

class AFightingCharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBaseEnvironmentalInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImpact, AFightingCharacter*, _takenDown, const FNetOrderStructTakedown&, _takedownInfos);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImpact m_OnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushObstacleReaction m_eReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAllowedInteractionTypes;
    
    UBaseEnvironmentalInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTakedownStarted(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(const AFightingCharacter* _Instigator, const AFightingCharacter* _takenDown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_CanTakeDown(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown);
    
};

