#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeLink.h"
#include "AIPhaseNodeSoftLink.generated.h"

class UAIPhaseScenario;

USTRUCT(BlueprintType)
struct FAIPhaseNodeSoftLink : public FAIPhaseNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAIPhaseScenario> m_PhaseScenario;
    
    SIFU_API FAIPhaseNodeSoftLink();
};

