#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EnvironmentalImpactComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UEnvironmentalImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEnvironmentalImpactComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnImpact(AActor* _Instigator, uint8 _uiImpactType, const FHitResult& _hit);
    
};

