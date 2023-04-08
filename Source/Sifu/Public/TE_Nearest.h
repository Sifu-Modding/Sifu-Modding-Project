#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_Nearest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTE_Nearest : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOutOfSightTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAutoSelectTargetCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantKeepPreviousTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoResetBestTarget;
    
    UTE_Nearest();
};

