#pragma once
#include "CoreMinimal.h"
#include "InteractionObjectComponent.h"
#include "InteractionObjectComponent.h"
#include "InputAction.h"
#include "MovableInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UMovableInteractionComponent : public UInteractionObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UInteractionObjectComponent::FUseObject OnPushObject;
    
    UPROPERTY(BlueprintAssignable)
    UInteractionObjectComponent::FUseObject OnThrowObject;
    
    UPROPERTY(BlueprintAssignable)
    UInteractionObjectComponent::FUseObject OnPickUpObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<InputAction> m_aInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fShowInteractionRange;
    
public:
    UMovableInteractionComponent();
};

