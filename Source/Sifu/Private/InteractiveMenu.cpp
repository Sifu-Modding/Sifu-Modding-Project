#include "InteractiveMenu.h"
#include "Components/SceneComponent.h"

AInteractiveMenu::AInteractiveMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->m_eMenu = EMenuEnum::None;
    this->m_InteractiveComp = NULL;
    this->m_ActorToBlendTo = NULL;
    this->m_MenuToShow = NULL;
    this->m_RootComponent = (USceneComponent*)RootComponent;
}

void AInteractiveMenu::BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility) {
}

FVector2D AInteractiveMenu::BPF_GetLeftStickValue(ASCPlayerController* _controller) const {
    return FVector2D{};
}

void AInteractiveMenu::BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime) {
}


