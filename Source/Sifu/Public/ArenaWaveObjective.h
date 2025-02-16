#pragma once
#include "CoreMinimal.h"
#include "BaseArenaObjective.h"
#include "EScoringType.h"
#include "ArenaWaveObjective.generated.h"

UCLASS(Blueprintable)
class SIFU_API UArenaWaveObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFinalWaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoringType m_eScoringType;
    
    UArenaWaveObjective();

private:
    UFUNCTION(BlueprintCallable)
    void OnWaveAndSituationComplete(int32 _iWaveIndex);
    
};

