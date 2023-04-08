#pragma once
#include "CoreMinimal.h"
#include "ReplayCachedAnimInstanceAssetPlayers.generated.h"

USTRUCT(BlueprintType)
struct FReplayCachedAnimInstanceAssetPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAnimInstanceIndex;
    
    SIFU_API FReplayCachedAnimInstanceAssetPlayers();
};

