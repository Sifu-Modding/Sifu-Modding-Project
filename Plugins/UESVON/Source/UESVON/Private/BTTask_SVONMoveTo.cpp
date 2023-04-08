#include "BTTask_SVONMoveTo.h"

UBTTask_SVONMoveTo::UBTTask_SVONMoveTo() {
    this->AcceptableRadius = 5.00f;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bTrackMovingGoal = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bUseAsyncPathfinding = false;
}

