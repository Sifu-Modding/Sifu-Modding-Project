#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "CustomBoundingBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCustomBoundingBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UsableSides;
    
    UCustomBoundingBoxComponent(const FObjectInitializer& ObjectInitializer);

};

