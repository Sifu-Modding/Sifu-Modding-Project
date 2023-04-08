#pragma once
#include "CoreMinimal.h"
#include "PhasesTransitionObjectCacheEntry.h"
#include "PhasesTransitionObjectCache.generated.h"

USTRUCT(BlueprintType)
struct FPhasesTransitionObjectCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPhasesTransitionObjectCacheEntry> m_Cache;
    
    SIFU_API FPhasesTransitionObjectCache();
};

