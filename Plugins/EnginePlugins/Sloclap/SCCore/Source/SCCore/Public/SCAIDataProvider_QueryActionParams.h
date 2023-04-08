#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "GameplayTagContainer.h"
#include "SCAIDataProvider_QueryActionParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SCCORE_API USCAIDataProvider_QueryActionParams : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFetchOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ActionInjectionTag;
    
    USCAIDataProvider_QueryActionParams();
};

