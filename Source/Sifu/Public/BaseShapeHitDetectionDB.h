#pragma once
#include "CoreMinimal.h"
#include "BaseHitDetectionDB.h"
#include "BaseShapeHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBaseShapeHitDetectionDB : public UBaseHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyOwnerScale;
    
    UBaseShapeHitDetectionDB();
};

