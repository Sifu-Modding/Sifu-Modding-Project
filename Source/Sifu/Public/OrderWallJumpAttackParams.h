#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructWallJumpAttack.h"
#include "OrderParams.h"
#include "OrderWallJumpAttackParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderWallJumpAttackParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetOrderStructWallJumpAttack m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetOrderStructWallJumpAttack m_TransientParams;
    
    UOrderWallJumpAttackParams();
};

