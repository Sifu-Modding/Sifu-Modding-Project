#pragma once
#include "CoreMinimal.h"
#include "ASMComponent.h"
#include "ASMPlayerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMPlayerComponent : public UASMComponent {
    GENERATED_BODY()
public:
    UASMPlayerComponent();
};

