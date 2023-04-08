#pragma once
#include "CoreMinimal.h"
#include "GeneratedWallInfos.generated.h"

class UCustomBoundingBoxComponent;

USTRUCT(BlueprintType)
struct FGeneratedWallInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomBoundingBoxComponent* m_Component;
    
    SIFU_API FGeneratedWallInfos();
};

