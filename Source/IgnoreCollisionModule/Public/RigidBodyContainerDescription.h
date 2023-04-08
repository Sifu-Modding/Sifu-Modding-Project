#pragma once
#include "CoreMinimal.h"
#include "RigidBodyContainerDescription.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRigidBodyContainerDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> m_Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_boneName;
    
    IGNORECOLLISIONMODULE_API FRigidBodyContainerDescription();
};

