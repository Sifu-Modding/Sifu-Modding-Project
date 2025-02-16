#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "MCDominationInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMCDominationInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiMCDominationFlags;
    
    UMCDominationInfluenceTest();

};

