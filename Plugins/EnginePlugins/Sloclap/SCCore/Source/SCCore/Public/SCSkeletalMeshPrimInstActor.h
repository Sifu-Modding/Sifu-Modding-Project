#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "SCSkeletalMeshPrimInstActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCSkeletalMeshPrimInstActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ASCSkeletalMeshPrimInstActor(const FObjectInitializer& ObjectInitializer);

};

