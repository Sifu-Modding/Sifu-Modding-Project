#pragma once
#include "CoreMinimal.h"
#include "PlayerStatesStatus.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatesStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWasActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActiveSince;
    
    SIFU_API FPlayerStatesStatus();
};

