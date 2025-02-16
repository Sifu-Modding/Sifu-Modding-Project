#include "SCTestingLocationsBase.h"
#include "Components/SceneComponent.h"

ASCTestingLocationsBase::ASCTestingLocationsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


