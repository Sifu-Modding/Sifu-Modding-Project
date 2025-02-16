#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructAttack.h"
#include "OrderParams.h"
#include "OrderAttackParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderAttackParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetOrderStructAttack m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetOrderStructAttack m_TransientParams;
    
    UOrderAttackParams();

};

