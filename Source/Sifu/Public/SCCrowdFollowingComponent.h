#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SCPoolableActorComponent.h"
#include "EGlobalBehaviors.h"
#include "ESpeedState.h"
#include "SCCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCrowdFollowingComponent : public UCrowdFollowingComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    USCCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetForcedMaxSpeedStateOnAllAIs(ESpeedState _eSpeedState);
    

    // Fix for true pure virtual functions not being implemented
};

