#pragma once
#include "CoreMinimal.h"
#include "AnalogInputSequenceStep.h"
#include "EControllerIconAxisTypes.h"
#include "GenericInputData.h"
#include "AnalogInputSequenceData.generated.h"

class UVectorInputData;

UCLASS(Blueprintable)
class SIFU_API UAnalogInputSequenceData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVectorInputData* m_VectorInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRawVectorInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalogInputSequenceStep> m_Steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxParalellStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EControllerIconAxisTypes> m_UIAxis;
    
    UAnalogInputSequenceData();

};

