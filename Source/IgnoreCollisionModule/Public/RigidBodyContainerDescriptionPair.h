#pragma once
#include "CoreMinimal.h"
#include "RigidBodyContainerDescription.h"
#include "RigidBodyContainerDescriptionPair.generated.h"

USTRUCT(BlueprintType)
struct FRigidBodyContainerDescriptionPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigidBodyContainerDescription m_first;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigidBodyContainerDescription m_second;
    
    IGNORECOLLISIONMODULE_API FRigidBodyContainerDescriptionPair();
};

