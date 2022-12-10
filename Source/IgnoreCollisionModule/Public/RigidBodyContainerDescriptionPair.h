#pragma once
#include "CoreMinimal.h"
#include "RigidBodyContainerDescription.h"
#include "RigidBodyContainerDescriptionPair.generated.h"

USTRUCT()
struct FRigidBodyContainerDescriptionPair {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FRigidBodyContainerDescription m_first;
    
    UPROPERTY(VisibleAnywhere)
    FRigidBodyContainerDescription m_second;
    
    IGNORECOLLISIONMODULE_API FRigidBodyContainerDescriptionPair();
};

