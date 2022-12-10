#pragma once
#include "CoreMinimal.h"
#include "LocomotionTransitionsResultCache.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionTransitionsResultCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bToV0;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bToV1;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bToV2;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV0;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV1;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV1_MoveStatusCombat;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV1_AIHack;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV2;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionToV3;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsInTransition;
    
    SIFU_API FLocomotionTransitionsResultCache();
};

