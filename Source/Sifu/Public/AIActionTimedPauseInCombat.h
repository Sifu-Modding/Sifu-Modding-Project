#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionTimedPauseInCombat.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionTimedPauseInCombat : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPauseTime;
    
    UAIActionTimedPauseInCombat();

};

