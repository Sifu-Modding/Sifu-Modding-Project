#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IgnoreCollisionDirector.generated.h"

UCLASS(Blueprintable)
class IGNORECOLLISIONMODULE_API AIgnoreCollisionDirector : public AActor {
    GENERATED_BODY()
public:
    AIgnoreCollisionDirector(const FObjectInitializer& ObjectInitializer);

};

