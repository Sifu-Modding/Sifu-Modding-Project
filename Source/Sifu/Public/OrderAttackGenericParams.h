#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "OrderParams.h"
#include "OrderAttackGenericParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderAttackGenericParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetOrderStructPlayAnim m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetOrderStructPlayAnim m_TransientParams;
    
    UOrderAttackGenericParams();

};

