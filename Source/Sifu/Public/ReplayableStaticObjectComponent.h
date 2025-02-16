#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplayableStaticObjectComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableStaticObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_RootPrimComp;
    
public:
    UReplayableStaticObjectComponent(const FObjectInitializer& ObjectInitializer);

};

