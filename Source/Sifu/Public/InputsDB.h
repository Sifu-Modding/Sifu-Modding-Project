#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputsDB.generated.h"

class UInputContextData;

UCLASS()
class SIFU_API UInputsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInputContextData* m_contexts[12];
    
    UPROPERTY(EditAnywhere)
    float m_fStartStabilizationDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fStopStabilizationDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fThresholdInputDiffForStabilisation;
    
    UPROPERTY(EditAnywhere)
    float m_fStickThresholdBetweenV1V2;
    
    UInputsDB();
};

