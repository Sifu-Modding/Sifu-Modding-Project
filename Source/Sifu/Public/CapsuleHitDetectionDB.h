#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
#include "CapsuleHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCapsuleHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHalfHeight;
    
    UCapsuleHitDetectionDB();

};

