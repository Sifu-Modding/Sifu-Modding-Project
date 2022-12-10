#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "SCNavModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USCNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_CalcAndCacheBounds();
    
};

