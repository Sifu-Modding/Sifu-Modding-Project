#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "EGlobalBehaviors.h"
#include "DespawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UDespawnComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UDespawnComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, bool _fromDialog);
    

    // Fix for true pure virtual functions not being implemented
};

