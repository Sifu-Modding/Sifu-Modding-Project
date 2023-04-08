#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ChargedBuildUpStructGenericInfos.h"
#include "ChargedBuildUpStructByQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FChargedBuildUpStructByQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_BuildUpByQuadrant[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargedBuildUpStructGenericInfos m_Infos;
    
    SIFU_API FChargedBuildUpStructByQuadrant();
};

