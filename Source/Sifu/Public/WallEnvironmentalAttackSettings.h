#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitBox.h"
#include "UObject/Object.h"
#include "SCUserDefinedEnumHandler.h"
#include "Engine/EngineTypes.h"
#include "WallEnvironmentalAttackSettings.generated.h"

class UTakedownAnimRequest;

UCLASS(BlueprintType)
class SIFU_API UWallEnvironmentalAttackSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_HitOnWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eRayCastCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRefCharSnapDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fSplineMargin;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRaycastAngleWithSnap;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRaycastAngleWithoutSnap;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDistToProjection;
    
    UPROPERTY(EditAnywhere)
    FName m_ImpactBoneName;
    
    UPROPERTY(EditAnywhere)
    float m_fImpactBoneYawRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseInstigatorAsRef;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorAnimOnRightSide;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTakedownAnimRequest> m_animRequest;
    
    UWallEnvironmentalAttackSettings();
};

