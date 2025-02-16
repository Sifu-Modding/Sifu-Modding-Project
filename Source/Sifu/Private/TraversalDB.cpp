#include "TraversalDB.h"

UTraversalDB::UTraversalDB() {
    this->m_TraversalAnimRequestBlueprint = NULL;
    this->m_iNbOfFrameToUseAtEndOfPreExitForMeanFallingVelocity = 4;
    this->m_fMaxTrackingAngleFromStartDegree = 70.00f;
    this->m_RaycastLengthBySpeedState[0] = 0.00f;
    this->m_RaycastLengthBySpeedState[1] = 0.00f;
    this->m_RaycastLengthBySpeedState[2] = 0.00f;
    this->m_RaycastLengthBySpeedState[3] = 0.00f;
    this->m_fPreExitPhaseSnapRaycastOffsetAbove = 90.00f;
    this->m_fPreExitPhaseSnapRaycastOffsetBelow = 50.00f;
    this->m_fMaxTraversalDepth = 500.00f;
    this->m_fMaxTraversalHeight = 300.00f;
    this->m_fMaxTraversalHeightClimb = 500.00f;
    this->m_fMaxDepthToConsideredAsFenceWhenClimbingUp = 40.00f;
    this->m_fMinDurationBeforeEndOfEntrySnap = 0.20f;
    this->m_fMaximumSpeedStretchUp = 1.30f;
    this->m_uiAllowedEntryTypes = 0;
    this->m_fEvasionMaxDistBetweenInstigatorAndTarget = 200.00f;
    this->m_fEvasionDetectionDistance = 100.00f;
    this->m_uiTraversalTypeToDisplayHint = 0;
    this->m_bUseCamDirForVisualHintDisplay = false;
    this->m_fRaycastDistForVisualOnly = 600.00f;
    this->m_fMinTraversalClimbHeightForHint = 130.00f;
    this->m_fStrideLengthTraversalHint = 50.00f;
    this->m_fClimbHeightOffsetToDisplayHint = 100.00f;
    this->m_fClimbOnEdgeOffsetToDisplayHint = 0.00f;
    this->m_fCineHeightOffsetToDisplayHint = 40.00f;
}


