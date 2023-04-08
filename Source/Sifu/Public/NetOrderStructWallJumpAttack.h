#pragma once
#include "CoreMinimal.h"
#include "EWallJumpAttackPhase.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructWallJumpAttack.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructWallJumpAttack : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallJumpAttackPhase m_eCurrentWallJumpPhase;
    
    SIFU_API FNetOrderStructWallJumpAttack();
};

