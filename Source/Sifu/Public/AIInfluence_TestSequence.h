#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceNode.h"
#include "AIInfluence_TestSequence.generated.h"

class UAIInfluenceTest;

UCLASS(Blueprintable)
class SIFU_API UAIInfluence_TestSequence : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIInfluenceTest*> m_Tests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProbability;
    
    UAIInfluence_TestSequence();
};

