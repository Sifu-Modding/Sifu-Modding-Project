#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "PredictionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPredictionComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLocalPredictionOnly;
    
    UPredictionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

