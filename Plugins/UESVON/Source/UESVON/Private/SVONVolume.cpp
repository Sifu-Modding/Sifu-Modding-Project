#include "SVONVolume.h"
#include "SVONVolumeRenderingComponent.h"

ASVONVolume::ASVONVolume() {
    this->myShowMortonCodes = false;
    this->myShowNeighbourLinks = false;
    this->myShowParentChildLinks = false;
    this->myVoxelPower = 3;
    this->myCollisionChannel = ECC_WorldStatic;
    this->myObjectTypes = ObjectTypeQuery1;
    this->myClearance = 0.00f;
    this->myGenerationStrategy = ESVOGenerationStrategy::UseBaked;
    this->myNumLayers = 0;
    this->myNumBytes = 0;
    this->RenderingComp = CreateDefaultSubobject<USVONVolumeRenderingComponent>(TEXT("SVONRenderingComponent"));
}

