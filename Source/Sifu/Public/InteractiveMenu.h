#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "Components/SlateWrapperTypes.h"
#include "EMenuEnum.h"
#include "UObject/NoExportTypes.h"
#include "InteractiveMenu.generated.h"

class AActor;
class UInteractionObjectComponent;
class USceneComponent;
class UMenuWidget;
class AFightingPlayerController;
class ASCPlayerController;

UCLASS()
class SIFU_API AInteractiveMenu : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInteractionObjectComponent* m_InteractiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_ActorToBlendTo;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMenuWidget* m_MenuToShow;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USceneComponent* m_RootComponent;
    
public:
    AInteractiveMenu();
    UFUNCTION(BlueprintCallable)
    void BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility);
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetLeftStickValue(ASCPlayerController* _controller) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime);
    
};

