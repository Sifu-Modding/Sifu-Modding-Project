#pragma once
#include "CoreMinimal.h"
#include "BaseArenaObjective.h"
#include "EScoringType.h"
#include "ArenaWaveObjective.generated.h"

class AAISituationActor;

UCLASS()
class SIFU_API UArenaWaveObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ObjectiveWaveName;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFinalWaveIndex;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AAISituationActor> m_AIFinalSituation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScoringType m_eScoringType;
    
    UArenaWaveObjective();
private:
    UFUNCTION()
    void OnWaveComplete(int32 _iWaveIndex);
    
    UFUNCTION()
    void OnSituationResolved(AAISituationActor* _situationActor);
    
};

