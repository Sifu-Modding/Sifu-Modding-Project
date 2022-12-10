#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavMeshFreeSquare.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshFreeSquare {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_OffsetToInstigator;
    
    UPROPERTY(EditAnywhere)
    float m_fSquareSize;
    
    UPROPERTY(EditAnywhere)
    float m_fRaycastHeight;
    
    SIFU_API FNavMeshFreeSquare();
};

