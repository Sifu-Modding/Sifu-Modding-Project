#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "DefenseInfluenceNodeAvoid.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDefenseInfluenceNodeAvoid : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
    UDefenseInfluenceNodeAvoid();
};

