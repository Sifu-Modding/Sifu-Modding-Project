#include "SCNavLinkProxy.h"
#include "SCCustomNavLink.h"

ASCNavLinkProxy::ASCNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCCustomNavLink>(TEXT("SmartLinkComp"))) {
    this->PointLinks.AddDefaulted(1);
    this->m_eMinimalSpeedState = ESpeedState::V1;
}

void ASCNavLinkProxy::SetNavLinksEnabled(bool _bEnabled) {
}


bool ASCNavLinkProxy::AreAllNavLinksEnabled() const {
    return false;
}


