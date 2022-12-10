#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkySphere.generated.h"

class UMaterialInstance;

UCLASS()
class SIFU_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstance* BaseMaterial;
    
    ASkySphere();
};

