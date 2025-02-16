#include "PathPatrol.h"
#include "Components/SceneComponent.h"

APathPatrol::APathPatrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->m_patrolControlPoints.AddDefaulted(1);
    this->m_ePatrolType = EPatrolType::Loop;
    this->m_lookAtTarget = NULL;
}


