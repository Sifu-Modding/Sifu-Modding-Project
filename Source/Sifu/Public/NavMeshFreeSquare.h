#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavMeshFreeSquare.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshFreeSquare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_OffsetToInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSquareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaycastHeight;
    
    SIFU_API FNavMeshFreeSquare();
};

