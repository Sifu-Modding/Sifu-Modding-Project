#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ESCCardinalPoints.h"
#include "HittedAnimContainer.h"
#include "DefenseAnimInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDefenseAnimInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_ParryToStructureBrokenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_ParryToDizzyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorFightingStateLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCCardinalPoints, FAnimContainer> m_PushFromGrabAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCCardinalPoints, FAnimContainer> m_PushFromGrabCloseWallAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ParrySuccessAnim;
    
    FDefenseAnimInfos();
};

