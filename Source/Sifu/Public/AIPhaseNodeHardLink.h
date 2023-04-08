#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeLink.h"
#include "AIPhaseNodeHardLink.generated.h"

class UAIPhaseScenario;

USTRUCT(BlueprintType)
struct FAIPhaseNodeHardLink : public FAIPhaseNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPhaseScenario* m_Scenario;
    
    SIFU_API FAIPhaseNodeHardLink();
};

