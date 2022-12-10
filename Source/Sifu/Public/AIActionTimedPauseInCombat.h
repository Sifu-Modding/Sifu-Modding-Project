#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionTimedPauseInCombat.generated.h"

UCLASS()
class SIFU_API UAIActionTimedPauseInCombat : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPauseTime;
    
    UAIActionTimedPauseInCombat();
};

