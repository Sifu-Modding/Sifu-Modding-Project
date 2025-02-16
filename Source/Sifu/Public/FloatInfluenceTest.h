#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EAIInfluenceTest.h"
#include "FloatInfluenceTest.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UFloatInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIInfluenceTest m_eTestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValueMax;
    
    UFloatInfluenceTest();

};

