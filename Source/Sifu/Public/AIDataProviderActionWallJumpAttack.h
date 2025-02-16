#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "EWallJumpAttackParameter.h"
#include "AIDataProviderActionWallJumpAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UAIDataProviderActionWallJumpAttack : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallJumpAttackParameter m_eParameter;
    
    UAIDataProviderActionWallJumpAttack();

};

