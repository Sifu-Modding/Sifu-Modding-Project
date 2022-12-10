#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "SCStreamingActorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCStreamingActorComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bRecreatePhysicsForComponents;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecreatePhysicsOnVolumeEvents;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecreatePhysicsForComponentsRecursive;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecreatePhysicsOnPooling;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateLevelFromOverlapOnBeginPlay;
    
    UPROPERTY(EditAnywhere)
    FName m_OverlapShapeComponentName;
    
public:
    USCStreamingActorComponent();
    
    // Fix for true pure virtual functions not being implemented
};

