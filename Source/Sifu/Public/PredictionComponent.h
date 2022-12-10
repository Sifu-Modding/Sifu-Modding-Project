#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "PredictionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPredictionComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bLocalPredictionOnly;
    
    UPredictionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

