#pragma once
#include "CoreMinimal.h"
#include "VariableWeightInfo.h"
#include "AnimStruct4.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStruct4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInProgress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInProgress2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInProgress3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInProgress4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInProgress1Or2Or3Or4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableWeightInfo m_variableWeightLayers1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableWeightInfo m_variableWeightLayers2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableWeightInfo m_variableWeightLayers3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableWeightInfo m_variableWeightLayers4;
    
    FAnimStruct4();
};

