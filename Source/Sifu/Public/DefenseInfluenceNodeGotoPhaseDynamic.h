#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeSoftLink.h"
#include "ContextualDefenseInfluenceNode.h"
#include "DefenseInfluenceNodeGotoPhaseDynamic.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDefenseInfluenceNodeGotoPhaseDynamic : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeSoftLink m_phaseSoftLink;
    
    UDefenseInfluenceNodeGotoPhaseDynamic();
};

