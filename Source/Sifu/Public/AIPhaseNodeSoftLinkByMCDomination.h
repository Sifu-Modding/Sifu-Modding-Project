#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeSoftLink.h"
#include "AIPhaseNodeSoftLinkByMCDomination.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAIPhaseNodeSoftLinkByMCDomination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeSoftLink m_PhaseLink;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiMCDominationFlags;
    
    FAIPhaseNodeSoftLinkByMCDomination();
};

