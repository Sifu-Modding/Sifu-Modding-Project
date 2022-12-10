#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionFindActorsEnvQueryResult.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "ComboAIConditionFindActorsEnvQuery.generated.h"

class UEnvQuery;

UCLASS(Abstract, EditInlineNew)
class SIFU_API UComboAIConditionFindActorsEnvQuery : public UAIComboCondition {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindActorsEnvQueryDelegate, const TArray<FComboAIConditionFindActorsEnvQueryResult>&, _result);
    
    UPROPERTY(BlueprintAssignable)
    FFindActorsEnvQueryDelegate OnEnvQueryFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    float m_fQueryResultLifetime;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetResultsOnFailure;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> m_QueryParameters;
    
public:
    UComboAIConditionFindActorsEnvQuery();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_FillQueryParameters(TArray<FAIDynamicParam>& _outParams) const;
    
};

