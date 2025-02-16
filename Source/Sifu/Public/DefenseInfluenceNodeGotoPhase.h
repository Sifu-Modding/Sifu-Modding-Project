#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeHardLink.h"
#include "ContextualDefenseInfluenceNode.h"
#include "DefenseInfluenceNodeGotoPhase.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDefenseInfluenceNodeGotoPhase : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeHardLink m_phaseHardLink;
    
    UDefenseInfluenceNodeGotoPhase();

};

