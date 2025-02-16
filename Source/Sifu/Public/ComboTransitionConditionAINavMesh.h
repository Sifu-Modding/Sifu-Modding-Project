#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionConditionAICheckObstacles.h"
#include "NavMeshFreeRange.h"
#include "NavMeshFreeSquare.h"
#include "ComboTransitionConditionAINavMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionAINavMesh : public UComboTransitionConditionAICheckObstacles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshFreeRange> m_FreeRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshFreeSquare> m_FreeSquares;
    
    UComboTransitionConditionAINavMesh();

};

