#pragma once
#include "CoreMinimal.h"
#include "SoundTensionThreat.generated.h"

class AAISituationActor;

USTRUCT(BlueprintType)
struct SIFU_API FSoundTensionThreat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISituationActor*> m_AiSituations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBehaviorsMask;
    
    FSoundTensionThreat();
};

