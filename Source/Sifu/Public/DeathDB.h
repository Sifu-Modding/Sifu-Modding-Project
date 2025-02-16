#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "InheritedDataAsset.h"
#include "DeathRadialImpulse.h"
#include "DeathStandupAnimations.h"
#include "SCDeathAnimTypeEnum.h"
#include "DeathDB.generated.h"

class UAnimSequence;
class ULevelSequence;

UCLASS(Blueprintable)
class SIFU_API UDeathDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFallOnSlopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathRadialImpulse m_RadialImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSCDeathAnimTypeEnum, UAnimSequence*> m_DeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathStandupAnimations m_StandUpAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_DownBeforeStandupAnim;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKnockBackDistance[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_iNbFrameStuned[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFloorCorrectionCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCollisionsFreeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCameraTargetPelvis;
    
    UDeathDB();

};

