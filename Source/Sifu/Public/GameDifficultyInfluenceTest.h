#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "GameDifficultyInfluenceTest.generated.h"

UCLASS()
class SIFU_API UGameDifficultyInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_uiGameDifficultyFlags;
    
    UGameDifficultyInfluenceTest();
};

