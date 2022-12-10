#include "SCNavLinkProxy.h"
#include "Components/SceneComponent.h"

void ASCNavLinkProxy::SetNavLinksEnabled(bool _bEnabled) {
}

bool ASCNavLinkProxy::AreAllNavLinksEnabled() const {
    return false;
}

ASCNavLinkProxy::ASCNavLinkProxy() {
    this->m_CustomNavLinks.AddDefaulted(3);
    this->m_PositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PositionComponent"));
    this->m_fDistance = 70.00f;
    this->m_fLeftOffset = 60.00f;
    this->m_fRightOffset = 100.00f;
}

