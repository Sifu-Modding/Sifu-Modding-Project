#pragma once
#include "CoreMinimal.h"
#include "ASMComponent.h"
#include "ASMAIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMAIComponent : public UASMComponent {
    GENERATED_BODY()
public:
    UASMAIComponent(const FObjectInitializer& ObjectInitializer);

};

