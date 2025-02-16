#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceNode.h"
#include "AIInfluenceTest.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UAIInfluenceTest : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverted;
    
    UAIInfluenceTest();

};

