#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VitalPointAttachComponent.generated.h"

class UVitalPointData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UVitalPointAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVitalPointData* m_VitalPointData;
    
    UVitalPointAttachComponent();
};

