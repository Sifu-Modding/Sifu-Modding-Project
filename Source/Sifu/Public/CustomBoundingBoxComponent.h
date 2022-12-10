#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "CustomBoundingBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCustomBoundingBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_UsableSides;
    
    UCustomBoundingBoxComponent();
};

