#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "SCNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USCNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_CalcAndCacheBounds();
    
};

