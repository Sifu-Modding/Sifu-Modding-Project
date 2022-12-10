#include "PerPlatformScaleBox.h"

UPerPlatformScaleBox::UPerPlatformScaleBox() {
    this->NormalStretch = EStretch::None;
    this->SmallScreenStretch = EStretch::None;
    this->NormalStretchDirection = EStretchDirection::Both;
    this->SmallScreenStretchDirection = EStretchDirection::Both;
    this->NormalUserSpecifiedScale = 1.00f;
    this->SmallScreenUserSpecifiedScale = 1.00f;
    this->NormalIgnoreInheritedScale = false;
    this->SmallScreenIgnoreInheritedScale = false;
}

