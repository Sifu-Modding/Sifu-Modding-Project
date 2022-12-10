#pragma once
#include "CoreMinimal.h"
#include "RigidBodyContainerDescription.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRigidBodyContainerDescription {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<UPrimitiveComponent> m_Component;
    
    UPROPERTY(VisibleAnywhere)
    FName m_boneName;
    
    IGNORECOLLISIONMODULE_API FRigidBodyContainerDescription();
};

