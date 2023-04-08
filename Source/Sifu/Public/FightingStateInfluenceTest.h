#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EFightingState.h"
#include "FightingStateInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFightingStateInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
public:
    UFightingStateInfluenceTest();
};

