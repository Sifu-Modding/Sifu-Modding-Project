#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedDestructibleChunks.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedDestructibleChunks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_ChunkTransforms;
    
    SIFU_API FReplicatedDestructibleChunks();
};

