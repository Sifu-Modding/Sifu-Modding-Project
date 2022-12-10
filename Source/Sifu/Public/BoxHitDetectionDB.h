#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
#include "UObject/NoExportTypes.h"
#include "BoxHitDetectionDB.generated.h"

UCLASS()
class SIFU_API UBoxHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_Extent;
    
    UBoxHitDetectionDB();
};

