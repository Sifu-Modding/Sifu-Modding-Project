#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "V2BlockerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UV2BlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UV2BlockerComponent();
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
};

