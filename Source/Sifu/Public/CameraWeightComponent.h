#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraWeightComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCameraWeightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCameraWeightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetWeight() const;
    
};

