#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplayableStaticObjectComponent.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableStaticObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* m_RootPrimComp;
    
public:
    UReplayableStaticObjectComponent();
};

