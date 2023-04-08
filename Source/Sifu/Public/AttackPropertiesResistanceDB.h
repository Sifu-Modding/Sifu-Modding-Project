#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "InheritedDataAsset.h"
#include "AttackPropertyResistanceMatrixByFightingState.h"
#include "DizzyReaction.h"
#include "PropertyReaction.h"
#include "PushPropertyReaction.h"
#include "StructureBrokenReaction.h"
#include "SuperDizzyReaction.h"
#include "AttackPropertiesResistanceDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackPropertiesResistanceDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackPropertyResistanceMatrixByFightingState m_ResistanceMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsConsidereredAsKnockdownThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInterruptDownWhenAlone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyReaction m_DownReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructureBrokenReaction m_StructureBrokenReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDizzyReaction m_DizzyReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuperDizzyReaction m_SuperDizzyReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushPropertyReaction m_PushedReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FallFromPushedAnim;
    
    UAttackPropertiesResistanceDB();
};

