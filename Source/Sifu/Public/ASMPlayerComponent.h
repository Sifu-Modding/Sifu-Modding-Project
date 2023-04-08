#pragma once
#include "CoreMinimal.h"
#include "ASMComponent.h"
#include "ASMPlayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMPlayerComponent : public UASMComponent {
    GENERATED_BODY()
public:
    UASMPlayerComponent();
};

