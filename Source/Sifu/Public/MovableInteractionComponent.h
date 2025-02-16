#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InteractionObjectComponent.h"
#include "InteractionObjectComponent.h"
#include "MovableInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UMovableInteractionComponent : public UInteractionObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent::FUseObject OnPushObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent::FUseObject OnThrowObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent::FUseObject OnPickUpObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_aInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowInteractionRange;
    
public:
    UMovableInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

