#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseShapeHitDetectionDB.h"
#include "BoxHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBoxHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Extent;
    
    UBoxHitDetectionDB();
};

