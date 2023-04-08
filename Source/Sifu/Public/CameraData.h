#pragma once
#include "CoreMinimal.h"
#include "AbstractCameraData.h"
#include "CameraNodeStruct.h"
#include "CameraData.generated.h"

class UCameraData;

UCLASS(Blueprintable)
class SIFU_API UCameraData : public UAbstractCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraNodeStruct m_CameraNodeStruct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraData* m_ParentCamera;
    
public:
    UCameraData();
};

