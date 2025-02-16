#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SCStaticMeshPrimInstActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCStaticMeshPrimInstActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASCStaticMeshPrimInstActor(const FObjectInitializer& ObjectInitializer);

};

