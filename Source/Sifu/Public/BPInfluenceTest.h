#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "BPInfluenceTest.generated.h"

class UAIFightingComponent;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBPInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NodeName;
    
    UBPInfluenceTest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_RunBPTest(const UAIFightingComponent* _testedAI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BPE_GetDescriptionDetails() const;
    
};

