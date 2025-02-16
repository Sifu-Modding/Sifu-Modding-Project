#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
#include "SphereHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API USphereHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRadius;
    
    USphereHitDetectionDB();

};

