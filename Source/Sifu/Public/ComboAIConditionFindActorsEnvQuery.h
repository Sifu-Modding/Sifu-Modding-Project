#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "AIComboCondition.h"
#include "ComboAIConditionFindActorsEnvQueryResult.h"
#include "ComboAIConditionFindActorsEnvQuery.generated.h"

class UEnvQuery;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionFindActorsEnvQuery : public UAIComboCondition {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindActorsEnvQueryDelegate, const TArray<FComboAIConditionFindActorsEnvQueryResult>&, _result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindActorsEnvQueryDelegate OnEnvQueryFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fQueryResultLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetResultsOnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> m_QueryParameters;
    
public:
    UComboAIConditionFindActorsEnvQuery();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_FillQueryParameters(TArray<FAIDynamicParam>& _outParams) const;
    
};

