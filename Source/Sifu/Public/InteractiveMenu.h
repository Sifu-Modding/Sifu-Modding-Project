#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCActor.h"
#include "Components/SlateWrapperTypes.h"
#include "EMenuEnum.h"
#include "InteractiveMenu.generated.h"

class AActor;
class AFightingPlayerController;
class ASCPlayerController;
class UInteractionObjectComponent;
class UMenuWidget;
class USceneComponent;

UCLASS(Blueprintable)
class SIFU_API AInteractiveMenu : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ActorToBlendTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuWidget* m_MenuToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComponent;
    
public:
    AInteractiveMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetLeftStickValue(ASCPlayerController* _controller) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime);
    
};

