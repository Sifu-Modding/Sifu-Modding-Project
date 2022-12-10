#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VitalPointAttachComponent.generated.h"

class UVitalPointData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UVitalPointAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVitalPointData* m_VitalPointData;
    
    UVitalPointAttachComponent();
};

