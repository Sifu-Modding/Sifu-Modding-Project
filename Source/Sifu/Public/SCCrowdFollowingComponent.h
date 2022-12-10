#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "EGlobalBehaviors.h"
#include "SCCrowdFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCrowdFollowingComponent : public UCrowdFollowingComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    USCCrowdFollowingComponent();
private:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
    
    // Fix for true pure virtual functions not being implemented
};

