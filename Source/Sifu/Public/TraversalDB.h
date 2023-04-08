#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ETraversalEntryType.h"
#include "HitBox.h"
#include "Templates/SubclassOf.h"
#include "TraversalInputBehavior.h"
#include "TraversalTypeSettings.h"
#include "TraversalDB.generated.h"

class UTraversalAnimRequest;

UCLASS(Blueprintable)
class UTraversalDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTraversalAnimRequest> m_TraversalAnimRequestBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbOfFrameToUseAtEndOfPreExitForMeanFallingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTrackingAngleFromStartDegree;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RaycastLengthBySpeedState[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreExitPhaseSnapRaycastOffsetAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreExitPhaseSnapRaycastOffsetBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vBoxExtentsToSnapToNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTraversalDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTraversalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTraversalHeightClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDepthToConsideredAsFenceWhenClimbingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDurationBeforeEndOfEntrySnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaximumSpeedStretchUp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalInputBehavior m_InputBehaviorBySpeed[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiAllowedEntryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEvasionMaxDistBetweenInstigatorAndTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEvasionDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiTraversalTypeToDisplayHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCamDirForVisualHintDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaycastDistForVisualOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinTraversalClimbHeightForHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStrideLengthTraversalHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fClimbHeightOffsetToDisplayHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fClimbOnEdgeOffsetToDisplayHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCineHeightOffsetToDisplayHint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalTypeSettings m_DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETraversalEntryType, FTraversalTypeSettings> m_CustomSettings;
    
public:
    UTraversalDB();
};

