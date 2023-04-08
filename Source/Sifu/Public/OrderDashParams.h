#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructDash.h"
#include "OrderParams.h"
#include "OrderDashParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderDashParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetOrderStructDash m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetOrderStructDash m_TransientParams;
    
    UOrderDashParams();
};

