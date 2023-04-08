#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "HitBox.h"
#include "HittedAnimContainer.h"
#include "OverridingHitBox.generated.h"

class UAttackPropertiesResistanceDB;

USTRUCT(BlueprintType)
struct SIFU_API FOverridingHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackPropertiesResistanceDB* m_ResistanceDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FightingStateLoopAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FightingStateRecoveryAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_LethalHittedAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLethalHittedAnimPlayerOnly;
    
    FOverridingHitBox();
};

