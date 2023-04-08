#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EAIGameplayStates.h"
#include "GPStateInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGPStateInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIGameplayStates m_eState;
    
    UGPStateInfluenceTest();
};

