#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "ETS_NextHitExtraInfos.h"
#include "TargetResult.h"
#include "TE_NextHit.generated.h"

class AFightingCharacter;

UCLASS(BlueprintType)
class SIFU_API UTE_NextHit : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinHitboxTimeLeft;
    
    UTE_NextHit();
    UFUNCTION(BlueprintPure)
    bool BPF_TryGetTargetExtraInfos(const AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos) const;
    
};

