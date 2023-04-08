#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "NetOrderStruct.h"
#include "TraversalInfo.h"
#include "NetOrderStructTraversal.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructTraversal : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_FallHit;
    
    SIFU_API FNetOrderStructTraversal();
};

