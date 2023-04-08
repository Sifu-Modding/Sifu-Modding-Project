#pragma once
#include "CoreMinimal.h"
#include "CameraCollisionSideRaycast.h"
#include "CameraCollisionSideRaycastList.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraCollisionSideRaycastList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraCollisionSideRaycast> m_ListOfRayCast;
    
    FCameraCollisionSideRaycastList();
};

