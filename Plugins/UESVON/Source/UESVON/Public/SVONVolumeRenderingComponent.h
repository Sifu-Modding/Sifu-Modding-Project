#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SVONVolumeRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USVONVolumeRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USVONVolumeRenderingComponent();
};

