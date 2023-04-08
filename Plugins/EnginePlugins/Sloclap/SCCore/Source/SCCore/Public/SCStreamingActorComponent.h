#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "SCStreamingActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCStreamingActorComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecreatePhysicsForComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecreatePhysicsOnVolumeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecreatePhysicsForComponentsRecursive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecreatePhysicsOnPooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateLevelFromOverlapOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OverlapShapeComponentName;
    
public:
    USCStreamingActorComponent();
    
    // Fix for true pure virtual functions not being implemented
};

